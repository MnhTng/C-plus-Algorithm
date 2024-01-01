#include <bits/stdc++.h>
using namespace std;

int sinh( int *arr, int n, int k, int &check ){
    int count = 0, num = 0;
    int  i = n;
    while( i >= 1 && arr[i] == 1 ){
        arr[i] = 0;
        i--;
    }

    if( i == 0 )
        check = 0;
    else
        arr[i]++;
        
    for( int j = 1; j <= n; j++ ){
        if( arr[j] == 0 )
            count++;
        else
            count = 0;
        if( count > k )
            return 0;
        if( count == k )
            num++;
    }
    return num == 1 && check;
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
                for( int i = 1; i <= n; i++ ){
                    if( arr[i] == 0 )
                        cout << 'A';
                    else
                        cout << 'B';
                }
                cout << endl;
            }
        }
    }
    system("pause");
    return 0;
}