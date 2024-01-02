#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        vector<long long> v;

        int num = 0;
        long long kq = 1;
        for( char x : s ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                kq *= num;
                v.push_back( num );
                num = 0;
            }
        }
        v.push_back( num );
        kq *= num;

        for( int i = 0; i < v.size(); i++ ){
            cout << kq / v[i];

            if( i < v.size() - 1 )
                cout << ",";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}