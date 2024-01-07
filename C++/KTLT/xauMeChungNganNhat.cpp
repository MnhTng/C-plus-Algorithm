#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string a, b;
        cin >> a;
        cin >> b;
        int count = 0, result = a.size(), cond = 0;
        int pos = a.size();
        for( char x : b ){
            if( a.find( x ) != string::npos ){
                if( cond ){
                    if( a.find( x ) < pos ){
                        string temp( 1, x );
                        count++;
                        a.replace( a.find( x ), 1, "_" );
                        a.insert( pos + 1, temp );
                        pos += 1;
                    }
                    else{
                        pos = a.find( x );
                        a.replace( a.find( x ), 1, "_" );
                    }
                }
                else{
                    cond = 1;
                    pos = a.find( x );
                    a.replace( a.find( x ), 1, "_" );
                }
            }
            else
                count++;
        }
        result += count;
        cout << result << endl;
    }
    system("pause");
    return 0;
}