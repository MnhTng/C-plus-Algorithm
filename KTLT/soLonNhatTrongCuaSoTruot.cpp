#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        int k;
        cin >> s >> k;
        vector<int> v;
        vector<int> kq;

        int num = 0;
        for( char x : s ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                v.push_back( num );
                num = 0;
            }
        }

        if( num )
            v.push_back( num );

        int max = *max_element( v.begin(), v.begin() + k );
        kq.push_back( max );

        for( int i = k + 1; i <= v.size(); i++ ){
            int maxs = *max_element( v.begin() + i - k, v.begin() + i );
            kq.push_back( maxs );
        }

        for( int i = 0; i < kq.size(); i++ ){
            cout << kq[i];

            if( i < kq.size() - 1 )
                cout << ",";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}