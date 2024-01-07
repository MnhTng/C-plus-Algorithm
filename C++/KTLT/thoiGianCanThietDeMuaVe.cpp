#include <bits/stdc++.h>
using namespace std;

int totalTimeToBuy( vector<int> v, int k ){
    int kq = 0, count = 0, check = 1;

    while( 1 ){
        for( int i = 0; i < v.size(); i++ ){
            if( !v[k] ){
                check = 0;
                kq += count;
                break;
            }
            else if( v[i] ){
                v[i]--;
                count++;
            }
        }

        if( !check )
            break;
        
        kq += count;
        count = 0;
    }

    return kq;
}

vector<int> strToVector( string s ){
    vector<int> gia;
    int num = 0;

    for( char x : s ){
        if( x != ',' )
            num = num * 10 + ( x - '0' );
        else{
            gia.push_back( num );
            num = 0;
        }
    }
    gia.push_back( num );

    return gia;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        int k;
        cin >> s >> k;

        vector<int> v = strToVector( s );

        cout << totalTimeToBuy( v, k ) << endl;
    }
    system("pause");
    return 0;
}