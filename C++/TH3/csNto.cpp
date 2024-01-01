#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void prime( int l, int r ){
    int i, j;
    for( i = 0; i <= r - l + 1; i++ )
        arr[i] = 1;
    if( l == 0 )
        arr[0] = arr[1] = 0;
    if( l == 1 )
        arr[0] = 0;
    for( i = 2; i <= sqrt(r); i++ ){
        for( j = max( i * i, ( ( l + i - 1 ) / i ) * i ); j <= r; j += i )
            arr[j-l] = 0; 
    }
}

int primeDigit( int n ){
    while( n ){
        int digit = n % 10;
        n /= 10;
        if( digit != 2 && digit != 3 && digit != 5 && digit != 7 )
            return 0;
    }
    return 1;
}

int main(){
    int l, r;
    cout << "Nhap 2 can cua day so : ";
    cin >> l >> r;
     prime( l, r );
    int count = 0;
    cout << "So nguyen to co chu so la nguyen to : ";
    for( int i = 0; i <= r - l; i++ ){
        if( primeDigit( i + l ) && arr[i] )
            count++;
    }
    cout << count << endl;
    system("pause");
    return 0;
}