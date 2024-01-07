#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        stack<string> st;
        string temp = "";

        for( char x : s ){
            if( x == '(' ){
                if( temp.size() ){
                    st.push( temp );
                    temp.clear();
                }
            }
            else if( x == ')' ){
                reverse( temp.begin(), temp.end() );
                if( !st.empty() ){
                    temp = st.top() + temp;
                    st.pop();
                }
            }
            else
                temp += x;
        }
        
        cout << temp << endl;
    }
    system("pause");
    return 0;
}