#include <bits/stdc++.h>
using namespace std;

void phanTichSo( int *arr, int n ){
    for( int i = 1; i < n; i++ ){
        for( int j = i; j <= n; j++ )
            arr[j] = ( arr[j] + arr[j - i] ) % (long)(1e9 + 7);
    }
    cout << arr[n] << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;

        int arr[n + 1];
        memset( arr, 0, sizeof( arr ) );
        arr[0] = 1;

        phanTichSo( arr, n );
    }
    system("pause");
    return 0;
}

// void sinh( int *arr, int &size, int &check ){
//     int i = size;
//     while( i >= 1 && arr[i] == 1 )
//         i--;
    
//     if( i == 0 )
//         check = 0;
//     else{
//         arr[i]--;
//         int num1 = size - i + 1;
//         size = i;
//         int q = num1 / arr[i];
//         int r = num1 % arr[i];

//         for( int j = 1; j <= q; j++ ){
//             size++;
//             arr[size] = arr[i];
//         }

//         if( r ){
//             size++;
//             arr[size] = r;
//         }
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     while( t-- ){
//         int n;
//         cin >> n;

//         int check = 1, count = 0, size = 1;
//         int arr[100];
//         arr[1] = n;

//         while( check ){
//             for( int i = 1; i <= size; i++ )
//                 cout << arr[i] << " ";
//             cout << endl;
//             sinh( arr, size, check );
//             if( check )
//                 count++;
//         }

//         cout << count << endl;
//     }
//     system("pause");
//     return 0;
// }
