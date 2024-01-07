#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s;
        getline( cin, s );
        vector<int> v;

        if( s.empty() )
            cout << "0" << endl;
        else{
            int num = 0;
            for( char x : s ){
                if( x != ',' )
                    num = num * 10 +  ( x - '0' );
                else{
                    v.push_back( num );
                    num = 0;
                }
            }
            v.push_back( num );

            num = 0;
            int check = 1;
            for( int x : v ){
                if( x != num ){
                    check = 0;
                    cout << num << endl;
                    break;
                }
                else
                    num++;
            }

            if( check )
                cout << num << endl;
        }
    }
    system("pause");
    return 0;
}