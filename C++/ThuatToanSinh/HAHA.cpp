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

    if( arr[1] == 0 || arr[n] == 1 )
        return 0;

    int count = 0;
    for( int j = 1; j <= n; j++ ){
        if( arr[j] == 1 )
            count++;
        else
            count = 0;
        if( count > 1 )
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
        for( int i = 1; i <= n; i++ )
            arr[i] = 0;
        int check = 1;
        while( check ){
            if( sinh( arr, n, check ) ){
                for( int j = 1; j <= n; j++ ){
                    if( arr[j] == 0 )
                        cout << 'A';
                    else
                        cout << 'H';
                }
                cout << endl;
            }
        }
    }
    system("pause");
    return 0;
}