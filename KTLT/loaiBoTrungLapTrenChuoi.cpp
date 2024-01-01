#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        stack<char> st;
        
        for( char x : s ){
            if( st.empty() )
                st.push( x );
            else{
                if( x == st.top() )
                    st.pop();
                else
                    st.push( x );
            }
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