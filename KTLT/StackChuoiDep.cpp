#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        stack<char> st;
        char temp = '0';
        for( char x : s ){
            st.push( x );
            if( st.top() == temp + 32 || st.top() == temp - 32 ){
                st.pop();
                st.pop();
            }
            if( !st.empty() )
                temp = st.top();
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