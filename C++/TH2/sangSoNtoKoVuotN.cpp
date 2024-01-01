#include <bits/stdc++.h>
using namespace std;

void prime( int n ){
    int i, j;
    int arr[n];
    for( i = 0; i <= n; i++ )
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    for( i = 2; i <= sqrt( n ); i++ ){
        if( arr[i] ){
            for( j = i * i; j <= n; j += i )
                arr[j] = 0;
        }
    }
    for( i = 0; i <= n; i++ ){
        if( arr[i] )
            cout << i << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << "So nguyen to khong vuot qua n : ";
    prime( n );
    system("pause");
    return 0;
}