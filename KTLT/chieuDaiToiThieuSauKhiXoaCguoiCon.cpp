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
                if( st.top() == 'A' && x == 'B' )
                    st.pop();
                else if( st.top() == 'C' && x == 'D' )
                    st.pop();
                else
                    st.push( x );
            }
        }

        cout << st.size() << endl;
    }
    system("pause");
    return 0;
}