#include <bits/stdc++.h>
using namespace std;

int sinh( int *arr, int n, int k, int &check ){
    int count = 0, i = n;
    while (i >= 1 && arr[i] == 1 ){
        arr[i] = 0;
        i--;
    }
    if( i == 0 )
        check = 0;
    else
        arr[i]++;
    for( int j = 1; j <= n; j++ )
        count += arr[j];
    return count == k;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for( int i = 1; i <= n; i++ )
            arr[i] = 0;
        int check = 1;
        while( check ){
            if( sinh( arr, n, k, check ) ){
                for( int i = 1; i <= n; i++ )
                    cout << arr[i];
                cout << endl;
            }
        }
    }
    system("pause");
    return 0;
}