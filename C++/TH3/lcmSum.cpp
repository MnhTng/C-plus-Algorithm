/*
Cong thuc tinh tong cac boi chung nho nhat cua n :
        Xich ma tu i=1 -> i=n cua lcm( i, n ) 
      = Xich ma cua ( p * phiHamEuler( p ) + 1 ) * n / 2 
    Voi p: uoc cua n
*/

#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void Euler(){
    int i, j;
    for( i = 1; i <= 1000000; i++ )
        arr[i] = i;
    for( i = 2; i <= 1000000; i++ ){
        if( arr[i] == i ){
            arr[i] = i - 1;
            for( j = 2 * i; j <= 1000000; j += i ){
                arr[j] -= arr[j] / i;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    Euler();
    while( t-- ){
        int n;
        cin >> n;
        long long lcm = 0;
        for( int i = 1; i <= n; i++ ){
            if( n % i == 0 )
                lcm += i * arr[i];
        }
        lcm = ( lcm + 1 ) * n / 2;
        cout << lcm << endl;
    }
    system("pause");
    return 0;
}