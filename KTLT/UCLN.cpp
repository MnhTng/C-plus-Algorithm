#include <bits/stdc++.h>
using namespace std;

int gcd( int n, int m ){
    while( m ){
        int temp = n % m;
        n = m;
        m = temp;
    }
    return n;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, m;
        cin >> n >> m;

        int temp = n;
        n = max( temp, m );
        m = min( temp, m );

        cout << gcd( n, m ) << endl;
    }
    system("pause");
    return 0;
}