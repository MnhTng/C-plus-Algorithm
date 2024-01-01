#include <bits/stdc++.h>
using namespace std;

void result( long long n ){
    stack<char> st;
    while( n ){
        int x = n % 16;

        if( x < 10 )
            st.push( static_cast<char>( x + 48 ) );
        else
            st.push( static_cast<char>( x + 55 ) );

        n /= 16;
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
        long long n;
        cin >> n;

        result( n );
    }
    system("pause");
    return 0;
}