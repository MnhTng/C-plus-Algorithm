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
                if( x == 'c' && st.size() >= 2 ){
                    char b = st.top();
                    st.pop();
                    char a = st.top();
                    st.pop();

                    if( a != 'a' || b != 'b' ){
                        st.push( a );
                        st.push( b );
                        st.push( x );
                    }
                }
                else
                    st.push( x );
            }
        }

        if( st.empty() )
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    system("pause");
    return 0;
}