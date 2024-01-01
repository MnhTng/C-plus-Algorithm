/*
Cong thuc Euler tinh so luong so nguyen to cung nhau cua so nguyen n : 
                    n * ( xich ma tich cua ( 1 - 1 / p ) ) 
                Voi p: cac uoc nguyen to cua n
*/
#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void Euler(){
    int i, j;
    for( i = 1; i <= 1000000; i++ ){
        arr[i] = i;
    }
    for( i = 2; i <= 1000000; i++ ){
        if( arr[i] == i ){
        // neu i la so nguyen to
            arr[i] = i - 1;
            for( j = 2 * i; j <= 1000000; j += i )
            // loai bo cac uoc so cua cac boi cua i ( so nguyen to khong cung nhau ) 
                arr[j] -= arr[j] / i;
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
        for( int i = 1; i <= n; i++ ){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}