#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s, t;
        cin >> s >> t;

        stack<char> st1;
        stack<char> st2;
        string kq1 = "";
        string kq2 = "";

        for( char x : s ){
            if( x == '#' ){
                if( !st1.empty() )
                    st1.pop();
            }
            else
                st1.push( x );
        }

        for( char x : t ){
            if( x == '#' ){
                if( !st2.empty() )
                    st2.pop();
            }
            else
                st2.push( x );
        }

        while( !st1.empty() ){
            kq1 = st1.top() + kq1;
            st1.pop();
        }

        while( !st2.empty() ){
            kq2 = st2.top() + kq2;
            st2.pop();
        }

        if( kq1 == kq2 )
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    system("pause");
    return 0;
}