#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        stack<char> st;

        for( char c : s ){
            if( st.empty() )
                st.push( c );
            else{
                if( st.top() == '(' && c == ')' )
                    st.pop();
                else if( st.top() == '[' && c == ']' )
                    st.pop();
                else if( st.top() == '{' && c == '}' )
                    st.pop();
                else
                    st.push( c );
            }
        }

        if( st.empty() )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}