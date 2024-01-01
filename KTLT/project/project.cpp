
// Nhan va Cong 2 so nguyen cuc lon 

#include <bits/stdc++.h>
using namespace std;

class node{
    private:
        int data;
        node* next;
    public:
        node( int );
        void insert_footer( node*&, int );

        // Dem so phan tu
        int size( node* );

        node* sum( node* another );
        node* mul( node* another );
        void out();
};
//------------------------------------------------------------

node::node( int x ){
    this->data = x;
    this->next = NULL;
}
//------------------------------------------------------------

int node::size( node* i ){
    int count = 0;
    while( i != NULL ){
        count++;
        i = i->next;
    }
    return count;
}
//----------------------------------------------------------

void node::insert_footer( node*& head, int x ){
    node* new_node = new node( x );

    if( head == NULL ){
        head = new_node;
        return;
    }

    node* current = head;
    while( current->next != NULL ){
        current = current->next;
    }
    current->next = new_node;
}
//------------------------------------------------------------

void node::out(){
    stack<int> st;

    node* another = this;
    while( another != NULL ){
        st.push( another->data );
        another = another->next;
    }

    cout << st.top();
    st.pop();
    while( !st.empty() ){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}
//------------------------------------------------------------

node* node::sum( node* another ){
    node* sum = NULL;
    int carry = 0;
    node* current = this;

    // Truong hop dac biet
    node* first_node1 = this;
    node* first_node2 = another;

    while( first_node1->next != NULL )
        first_node1 = first_node1->next;
    while( first_node2->next != NULL )
        first_node2 = first_node2->next;

    if( first_node1->data == 0 && first_node2->data == 0 ){
        sum->insert_footer( sum, 0 );
        return sum;
    }

    if( first_node1->data == 0 ){
        while( another != NULL ){
            sum->insert_footer( sum, another->data );
            another = another->next;
        }
        return sum;
    }
    
    if( first_node2->data == 0 ){
        while( current != NULL ){
            sum->insert_footer( sum, current->data );
            current = current->next;
        }
        return sum;
    }

    // Thuc hien phep cong
    // 1 : do dai toi da cua cac chu so trong 1 node ( tu dinh nghia )
    while( current != NULL || another != NULL ){
        if( current != NULL && another != NULL ){
            int temp = current->data + another->data + carry;

            if( temp > 9 ){
                int x = temp % 10;
                sum->insert_footer( sum, x );
                carry = temp / 10;
            }
            else{
                sum->insert_footer( sum, temp );
                carry = 0;
            }

            current = current->next;
            another = another->next;
        }

        else if( current != NULL ){
            int temp = current->data + carry;

            if( temp > 9 ){
                int x = temp % 10;
                sum->insert_footer( sum, x );
                carry = temp / 10;
            }
            else{
                sum->insert_footer( sum, temp );
                carry = 0;
            }

            current = current->next;
        }

        else{
            int temp = another->data + carry;

            if( temp > 9 ){
                int x = temp % 10;
                sum->insert_footer( sum, x );
                carry = temp / 10;
            }
            else{
                sum->insert_footer( sum, temp );
                carry = 0;
            }

            another = another->next;
        }
    }   

    if( carry != 0 )
        sum->insert_footer( sum, carry );

    return sum;
}
//------------------------------------------------------------

node* node::mul( node* another ){
    node* mul = NULL;
    node* current = this;

    int carry = 0;
    // length : so phan tu cua node another
    int length = size( another );
    //  Tao vector 2 chieu de luu ket qua cua tung phep nhan
    vector<vector<int>> arr_node;

    // Truong hop dac biet
    node* first_node1 = this;
    node* first_node2 = another;

    while( first_node1->next != NULL )
        first_node1 = first_node1->next;
    while( first_node2->next != NULL )
        first_node2 = first_node2->next;

    if( first_node1->data == 0 || first_node2->data == 0 ){
        mul->insert_footer( mul, 0 );
        return mul;
    }

    int i = 0;
    // Tao vector luu tru do dai toi da cua tung node trong mang node
    vector<int> v;

    // Thuc hien phep nhan voi tung node
    while( another != NULL ){
        vector<int> t;
        node* new_node = this;

        while( new_node != NULL ){
            int temp = another->data * new_node->data + carry;

            if( temp > 9 ){
                int x = temp % 10;
                t.push_back( x ); 
                carry = temp / 10;
            }
            else{
                t.push_back( temp ); 
                carry = 0;
            }

            new_node = new_node->next;
        }

        while( carry ){
            int x = carry % 10;
            t.push_back( x ); 
            carry /= 10;
        }

        arr_node.push_back( t );
        v.push_back( t.size() + i );
        another = another->next;
        i++;
    }

    int col = *max_element( v.begin(), v.end() );
    // Tao ma tran luu tru ket qua cua mang node
    int arr[length][col];

    for( int j = 0; j < length; j++ ){
        for( int k = 0; k < col; k++ )
            arr[j][k] = 0;
    }

    for( int j = 0; j < length; j++ ){
        for( int k = j; k - j < arr_node[j].size(); k++ ){
            arr[j][k] += arr_node[j][k - j];
        }
    }

    // Cong cac ket qua cua ma tran theo cot
    carry = 0;
    for( int k = 0; k < col; k++ ){
        int sum = carry;

        for( int j = 0; j < length; j++ )
            sum += arr[j][k];

        if( sum > 9 ){
            int x = sum % 10;
            mul->insert_footer( mul, x );
            carry = sum / 10;
        }
        else{
            mul->insert_footer( mul, sum );
            carry = 0;
        }
    }

    while( carry ){
        int x = carry % 10;
        mul->insert_footer( mul, x );
        carry /= 10;
    }

    return mul;
}
//------------------------------------------------------------

int main(){
    freopen( "input.txt", "r", stdin );
    freopen( "output.txt", "w", stdout );
    int t;
    cin >> t;
    while( t-- ){
        string a, op, b;
        cin >> a >> op >> b;

        // Loai bo so 0 thua o dau chuoi
        int i = 0, j = 0;
        while( a.size() - i > 1 && a[i] == '0' ){
            i++;
        }

        while( b.size() - j > 1 && b[j] == '0' ){
            j++;
        }

        a = a.substr( i, a.size() - i );
        b = b.substr( j, b.size() - j );

        i = a.size() - 1, j = b.size() - 1;
        node* ope1 = NULL;
        node* ope2 = NULL;
        // Chia tung phan tu cho node
        while( i >= 0 ){
            int temp = a[i] - '0';
            ope1->insert_footer( ope1, temp );
            i = i - 1;
        }

        while( j >= 0 ){
            int temp = b[j] - '0';
            ope2->insert_footer( ope2, temp );
            j = j - 1;
        }

        node* result;
        if( op == "+" )
            result = ope1->sum( ope2 );
        else if( op == "*" )
            result = ope1->mul( ope2 );

        result->out();

        // Giai phong bo nho
        delete ope1;
        delete ope2;
        delete result;
    }
    system("pause");
    return 0;
}