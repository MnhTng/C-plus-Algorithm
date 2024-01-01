#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin  >> t;
    while( t-- ){
        string s;
        cin >> s;
        stack<char> st;

        for( char x : s ){
            if( x == '*' && !st.empty() )
                st.pop();
            else if( x != '*' )
                st.push( x );
        }

        string result = "";
        while( !st.empty() ){
            result = st.top() + result;
            st.pop();
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}