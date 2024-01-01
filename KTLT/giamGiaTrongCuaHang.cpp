#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        vector<int> v;

        int gia = 0;
        for( char x : s ){
            if( x != ',' )
                gia = gia * 10 + ( x - '0' );
            else{
                v.push_back( gia );
                gia = 0;
            }
        }

        if( gia )
            v.push_back( gia );
        
        for( int i = 0; i < v.size() - 1; i++ ){
            for( int j = i + 1; j < v.size(); j++ ){
                if( v[j] <= v[i] ){
                    v[i] -= v[j];
                    break;
                }
            }
        }

        for( int i = 0; i < v.size(); i++ ){
            cout << v[i];

            if( i < v.size() - 1 )
                cout << ",";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}