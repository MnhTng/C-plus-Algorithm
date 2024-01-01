#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s1, s2;
        cin >> s1 >>s2;
        vector<int> v1, v2;

        int num = 0;
        for( char x : s1 ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                v1.push_back( num );
                num = 0;
            }
        }
        v1.push_back( num );

        num = 0;
        for( char x : s2 ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                v2.push_back( num );
                num = 0;
            }
        }
        v2.push_back( num );

        for( int x : v2 ){
            auto found = find( v1.begin(), v1.end(), x );

            if( found == v1.end() )
                v1.push_back( x );
        }

        for( int i = 0; i < v1.size(); i++ ){
            cout << v1[i];

            if( i < v1.size() - 1 )
                cout << ",";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}