/*
    Dem tan suat xuat hien cua so nto trong n
    Tinh pow mod cua x = x^( ei + 1 ) mod m
        ei bat dau tu 3
        x = 1 
        powMod = 0
        x *= 2
        ei /= 2
        powMod += x neu ei % 2 = 1
    x - 1 de loai truong hop so 1 la uoc
        neu x - 1 < 0 : + m
*/

#include <bits/stdc++.h>
using namespace std;

int nto[50002];
vector<int> v;

void sang(){
    for( int i = 0; i < 50002; i++ )
        nto[i] = 1;
    nto[0] = nto[1] = 0;
 
    for( int i = 2; i < sqrt( 50002 ); i++ ){
        if( nto[i] ){
            for( int j = i * i; j < 50002; j += i )
                nto[j] = 0;
        }
    }

    for( int i = 3; i < 50002; i += 2 ){
        if( nto[i] )
            v.push_back( i );
    }
}

void tan_suat( long long n, vector<int> v, vector<long long> &freq ){
    for( long long unsigned i = 0; i < v.size(); i++ ){
        long long count = 0;

        for( long long j = v[i]; j <= n; j *= v[i] )
            count += n / j;

        if( count == 0 )
            break;
        
        freq.push_back( count );
    }    
}

void powMod( long long &x, long long y, long long mod ){
    long long temp = 0;
    x %= mod;

    while( y ){
        if( y % 2 == 1 ){
            temp += x;
            temp %= mod;
        }

        x *= 2;
        x %= mod;
        y /= 2;
    }

    x = temp;
    x %= mod;
}

int main(){
    int t;
    cin >> t;
    sang();
    while( t-- ){
        long long n, m;
        cin >> n >> m;
        long long result = 1;
        vector<long long> freq;

        tan_suat( n, v, freq );

        for( long long unsigned i = 0; i < freq.size(); i++ )
            powMod( result, freq[i] + 1, m );

        if( result - 1 < 0 )
            cout << result - 1 + m << endl;
        else
            cout << result - 1 << endl;
    }
    system("pause");
    return 0;
}
