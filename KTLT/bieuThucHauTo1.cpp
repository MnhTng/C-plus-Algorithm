/*
Xet muc do uu tien cua cac toan tu
    *, /, %  -->  +, -  -->  (
        muc do uu tien cao hon duoc day vao stack
        muc do uu tien khong cao hon se duoc xuat ra
Chuyen tu trung to -> hau to
*/

#include <bits/stdc++.h>
using namespace std;

int priority( char c ){
    if( c == '+' || c == '-' )
        return 1;
    if( c == '*' || c == '/' || c == '%' )
        return 2;
    return 0;
}

void hau_to( string s ){
    stack<char> st;

    for( char c : s ){
        if( c >= 'a' && c <= 'z' )
            cout << c;
        else{
            if( st.empty() )
                st.push( c );
            else{
                if( c == ')' ){
                    while( st.top() != '(' ){
                        cout << st.top();
                        st.pop();
                    }

                    st.pop();
                }
                else if( c == '(' || priority( c ) > priority( st.top() ) )
                    st.push( c );
                else if( priority( c ) <= priority( st.top() ) ){
                    while( !st.empty() && priority( c ) <= priority( st.top() ) ){
                        cout << st.top();
                        st.pop();
                    }

                    st.push( c );
                }
            }
        }
    }

    while( !st.empty() ){
        cout << st.top();
        st.pop();
    }

    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;

        hau_to( s );
    }
    system("pause");
    return 0;
}