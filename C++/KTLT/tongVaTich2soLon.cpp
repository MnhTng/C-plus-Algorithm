#include <bits/stdc++.h>
using namespace std;

void sum( string a, string b ){
    int carry = 0;

    reverse( a.begin(), a.end() );
    reverse( b.begin(), b.end() );

    int length = a.size() - b.size();
    if( length > 0 ){
        for( int i = 0; i < length; i++ )
            b = b + "0";
    }
    else if( length < 0 ){
        for( int i = 0; i < abs( length ); i++ )
            a = a + "0";
    }

    stack<int> st;
    for( int i = 0; i < a.size(); i++ ){
        st.push( ( a[i] - '0' ) + ( b[i] - '0' ) + carry );
        if( st.top() > 9 ){
            carry = st.top() / 10;
            st.top() %= 10;
        }
        else
            carry = 0;
    }

    if( carry )
        st.push( carry );

    while( !st.empty() ){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

void mul( string a, string b ){
    vector<int> v( a.size() + b.size(), 0 );

    for( int i = a.size() - 1; i >= 0; i-- ){
        for( int j = b.size() - 1; j >= 0; j-- ){
            int mul = ( a[i] - '0' ) * ( b[j] - '0' );
            int sum = mul + v[i + j + 1];
            v[i + j + 1] = sum % 10;
            v[i + j] += sum / 10;
        }
    }

    while( !v.empty() && v[0] == 0 ){
        if( v.size() == 1 && v[0] == 0 )
            break;
        else
            v.erase( v.begin() );
    }
    
    for( int x : v )
        cout << x;
    cout << endl;
}

int main(){
    freopen( "bignumber.in", "r", stdin );
    freopen( "bignumber.out", "w", stdout );
    int t;
    cin >> t;
    while( t-- ){
        string a, op, b;
        cin >> a >> op >> b;

        if( op == "+" )
            sum( a, b );
        if( op == "*" )
            mul( a, b ); 
    }
    system("pause");
    return 0;
}