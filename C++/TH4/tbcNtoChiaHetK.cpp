#include <iostream>
using namespace std;

int nto( int x ){
    int i, count = 0;
    for( i = 1; i <= x; i++ ){
        if( x % i == 0 )
            count++;
    }
    if( count > 2 )
        return 0;
    return 1;
}

inline int divideByk( int x, int y ){
    if( x % y == 0 )
        return 1;
    else
        return 0;
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu cua mang : ";
    int i;
    for( i = 0; i < n; i++ )
        cin >> arr[i];
    int k;
    cout << "Nhap so tuy y : ";
    cin >> k;
    int sum = 0, count = 0;
    for( i = 0; i < n; i++ ){
        if( nto( arr[i] ) || divideByk( arr[i], k ) ){
            sum += arr[i];
            count++;
        }
    }
    float tbc = ( 1.0f * sum ) / count;
    cout << "TBC so nguyen to hoac chia het cho " << k << " la : " << tbc << endl;
    system("pause");
    return 0;
}