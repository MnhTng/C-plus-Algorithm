#include <bits/stdc++.h>
using namespace std;

int reverse( long long n ){
    long long rev = 0, temp = n;
    while( temp ){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int soDep( int n ){
    int begin = n % 10;
    n /= 10;
    long long num = 0;
    while( n >= 10 ){
        num = num * 10 + n % 10;
        n /= 10;
    }
    if( n == 2 * begin || begin == 2 * n )
        return reverse( num );
    return 0;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        if( soDep( n ) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}