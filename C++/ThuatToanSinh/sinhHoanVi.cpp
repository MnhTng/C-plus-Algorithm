#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ )
            arr[i] = i + 1;
        do{
            for( int x : arr )
                cout << x;
            cout << " ";
        }
        while( next_permutation( arr, arr + n ) );
        cout << endl;
    }
    system("pause");
    return 0;
}