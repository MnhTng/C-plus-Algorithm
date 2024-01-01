#include <bits/stdc++.h>
using namespace std;

void prime( int l, int r ){
    int i, j;
    int arr[r-l+1];
    for( i = 0; i <= r - l + 1; i++ )
        arr[i] = 1;
    if( l == 0 )
        arr[0] = arr[1] = 0;
    if( l == 1 )
        arr[0] = 0;
    for( i = 2; i <= sqrt( r ); i++ ){
        for( j = max( i * i, ( ( l + i - 1 ) / i ) * i ); j <= r; j += i )
            arr[j-l] = 0;
    }
    // ( ( l + i - 1 ) / i ) * i de tim so >= left va chia het cho i 
    
    // khong su dung if( arr[i] ) vi dang xet theo chi so tu 0 den size 
    // chu khong phai xet cac chu so tu left den right
    for( i = 0; i <= r - l; i++ ){
        if( arr[i] )
            cout << i + l << " ";
    }
    cout << endl;
}

int main(){
    int l, r;
    cout << "Nhap 2 can cua day so : ";
    cin >> l >> r;
    cout << "So nguyen to trong doan : ";
    prime( l, r );
    system("pause");
    return 0;
}