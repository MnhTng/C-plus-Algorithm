#include <bits/stdc++.h>
using namespace std;

int day_tang( string s ){
    for( int i = 0; i < s.size() - 1; i++ ){
        if( s[i] > s[i + 1] )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        int k;
        cin >> s >> k;
        stack<char> st;

        if( k == s.size() )
            cout << "0" << endl;
        else{
            while( k ){
                if( day_tang( s ) ){
                    while( k ){
                        s = s.substr( 0, s.size() - 1 );
                        k--;
                    }
                }
                else{
                    for( char x : s ){
                        if( st.empty() )
                            st.push( x );
                        else{
                            if( x < st.top() && k ){
                                st.pop();
                                st.push( x );
                                k--;
                            }
                            else
                                st.push( x );
                        }
                    }

                    s.clear();
                    while( !st.empty() ){
                        s = st.top() + s;
                        st.pop();
                    }
                }
            }

            while( s.front() == '0' && s.size() > 1 )
                s = s.substr( 1, s.size() - 1 );

            cout << s << endl;
        }
    }
    system("pause");
    return 0;
}