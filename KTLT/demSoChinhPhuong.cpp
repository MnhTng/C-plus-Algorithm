#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long l, r;
        cin >> l >> r;
        int count = 0;
        long long tren = sqrt( l ), duoi = sqrt( r );
        if( tren * tren != l )
            tren += 1;
        for( int i = tren; i <= duoi; i++ )
            count++;
        cout << count << endl;
    }
    system("pause");
    return 0;
}