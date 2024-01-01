#include <bits/stdc++.h>
using namespace std;

int change( int *arr, int n, int k ){
    int temp[k];
    for( int i = 0; i < k; i++ )
        temp[i] = arr[i + 1];

    int count = 0;
    int i = k;

    while( i >= 1 && arr[i] == n - k + i )
        i--;
    if( i == 0 )
        count = k;
    else{
        arr[i]++;
        for( int j = i + 1; j <= k; j++ )
            arr[j] = arr[j - 1] + 1;
        for( int j = 1; j <= k; j++ ){
            auto ite = find( temp, temp + k, arr[j] );
            if( ite == temp + k )
                count++;
        }
    }

    return count;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[k];
        for( int i = 1; i <= k; i++ )
            cin >> arr[i];
        cout << change( arr, n, k ) << endl;
    }
    system("pause");
    return 0;
}