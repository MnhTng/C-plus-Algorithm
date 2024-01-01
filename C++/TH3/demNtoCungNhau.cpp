/*
Ham phi EULER
    De dem so luong cac so nguyen to cung nhau voi n trong doan tu 1 -> n
    Cong thuc : 
                    n * ( xich ma tich cua ( 1 - 1 / p ) ) 
                Voi p: cac uoc nguyen to cua n
*/

#include <bits/stdc++.h>
using namespace std;

void primeDivisor( long long n ){
    int arr[1000];
    long long temp = n;
    int count = 0, i = 2;
    while( n != 1 ){
        if( n % i == 0 ){
            arr[count] = i;
            count++;
            while( n % i == 0 )
                n /= i;
        }
        i++;
    }
    for( int i = 0; i < count; i++ ){
        temp = temp * ( 1 - ( 1.0 / arr[i] ) );
    }
    cout << temp << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        primeDivisor( n );
    }
    system("pause");
    return 0;
}