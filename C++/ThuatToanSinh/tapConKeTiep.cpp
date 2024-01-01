#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[k];
        for( int i = 1; i <= k; i++ )
            cin >> arr[i];
        int i = k;
        while( i >= 1 && arr[i] == n - k + i )
            i--;
        if( i ){
            arr[i]++;
            for( int j = i + 1; j <= k; j++ )
                arr[j] = arr[j - 1] + 1;
            for( i = 1; i <= k; i++ )
                cout << arr[i] << " ";
        }
        else{
            for( i = 1; i <= k; i++ )
                cout << i << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}