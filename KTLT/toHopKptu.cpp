#include <bits/stdc++.h>
using namespace std;

void sinh( int *arr, int n, int k, int &check ){
    int i = k;
    while( i >= 1 && arr[i] == n - k + i )
        i--;

    if( i == 0 )
        check = 0;
    else{
        arr[i]++;
        for( int j = i + 1; j <= k; j++ )
            arr[j] = arr[j - 1] + 1;
    }
}

long factorial( int n ){
    long fac = 1;
    for( int i = 1; i <= n; i++ )
        fac *= i;
    return fac;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[k];
        for( int i = 1; i <= k; i++ )
            arr[i] = i;
        
        int check = 1;
        cout << factorial( n ) / ( factorial( k ) * factorial( n - k ) ) << endl;
        while( check ){
            cout << "[";
            for( int i = 1; i <= k; i++ ){
                if( i < k )
                    cout << arr[i] << " ";
                else
                    cout << arr[i] << "]" << endl;
            }
            sinh( arr, n, k, check );
        }
    }
    system("pause");
    return 0;
}
