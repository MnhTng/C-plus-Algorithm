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
        while( check ){
            for( int i = 1; i <= k; i++ ){
                cout << arr[i];
            }
            cout << " ";
            sinh( arr, n, k, check );
        }
        cout << endl;
    }
    system("pause");
    return 0;
}