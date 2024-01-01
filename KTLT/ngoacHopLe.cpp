#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;

        stack<char> st;
        int check = 1;
        for( char x : s ){
            if( st.empty() )
                st.push( x );
            else{
                if( x == ')' && st.top() == '(' )
                    st.pop();
                else if( x == ']' && st.top() == '[' )
                    st.pop();
                else if( x == '}' && st.top() == '{' )
                    st.pop();
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