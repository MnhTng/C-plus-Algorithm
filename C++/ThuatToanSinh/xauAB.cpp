#include <bits/stdc++.h>
using namespace std;

void sinh( int *arr, int n, int &check ){
    int i = n;
    while( i >= 1 && arr[i] == 1 ){
        arr[i] = 0;
        i--;
    }
    if( i == 0 )
        check = 0;
    else
        arr[i]++;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int check = 1;
        int arr[n];
        for( int i = 1; i <= n; i++ )
            arr[i] = 0;
        while( check ){
            for( int i = 1; i <= n; i++ ){
                if( arr[i] == 0 )
                    cout << 'A';
                else
                    cout << 'B';
            }
            cout << " ";
            sinh( arr, n, check );
        }
        cout << endl;
    }
    system("pause");
    return 0;
}