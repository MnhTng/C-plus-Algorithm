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

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string a, b;
        cin >> a >> b;
        sum( a, b );
    }
    system("pause");
    return 0;
}