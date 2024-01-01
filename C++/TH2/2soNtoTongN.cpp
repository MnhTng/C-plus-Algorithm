#include <bits/stdc++.h>
using namespace std;

int arr[10001];

void prime(){
    int i, j;
    for( i = 0; i <= 10000; i++ )
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    for( i = 2; i <= 100; i++ ){
        if( arr[i] ){
            for( j = i * i; j <= 10000; j += i )
                arr[j] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    prime();
    while( t-- ){
        int n;
        cout << "Nhap so nguyen n : ";
        cin >> n; 
        if( 4 <= n && n <= 10000 && n % 2 == 0){
            int i, j, check = 1;
            cout << "Cac cap so nguyen to co tong bang " << n << " : " << endl;
            for( i = 2; i <= n / 2; i++ ){
                if( arr[i] ){
                    for( j = i; j <= n - i; j++ ){
                        if( arr[j] ){
                            if( i + j == n ){
                                cout << i << " " << j << endl;
                                check = 0;
                            }
                        }
                    }
                }
            }
            if( check )
                cout << "0" << endl;
        }  
    }
    system("pause");
    return 0;
}