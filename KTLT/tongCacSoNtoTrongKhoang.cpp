#include <bits/stdc++.h>
using namespace std;

int nto[1000001];

void sang(){
    for( int i = 0; i <= 1000000; i++ )
        nto[i] = 1;
    nto[0] = nto[1] = 0;

    for( int i = 2; i <= 1000; i++ ){
        if( nto[i] ){
            for( int j = i * i; j <= 1000000; j += i )
                nto[j] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    sang();
    while( t-- ){
        int l, r;
        cin >> l >> r;

        long long kq = 0;
        for( int i = l; i <= r; i++ ){
            if( nto[i] )
                kq += i;
        }

        cout << kq << endl;
    }
    system("pause");
    return 0;
}