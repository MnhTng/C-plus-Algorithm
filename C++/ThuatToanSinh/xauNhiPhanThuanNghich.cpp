#include <bits/stdc++.h>
using namespace std;

int sinh( int *arr, int n, int &check ){
    int i = n;
    while( i >= 1 && arr[i] == 1 ){
        arr[i] = 0;
        i--;
    }

    if( i == 0 )
        check = 0;
    else
        arr[i]++;
    
    auto ite = find( arr + 1, arr + 1 + n, 1 );
    if( ite == arr + 1 + n )
        return 0;

    for( int j = 1; j <= n / 2; j++ ){
        if( arr[j] != arr[n + 1 - j] )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 1; i <= n; i++ ){
            arr[i] = 0;
            cout << arr[i];
        }
        cout << " ";
        int check = 1;
        while( check ){
            if( sinh( arr, n, check ) ){
                for( int j = 1; j <= n; j++ )
                    cout << arr[j];
                cout << " ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}