#include <bits/stdc++.h>
using namespace std;

int b[1000001];

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        memset( b, 0, sizeof( b ) );
        for( int i = 0; i < n; i++ ){
            cin >> arr[i];
            b[arr[i]] = 1;
        }

        int check = 1;
        for( int i = 1; i <= 100000; i++ ){
            if( b[i] == 0 ){
                cout << i << endl;
                check = 0;
                break;
            }
        }
        if( check )
            cout << "1000001" << endl;
    }
    system("pause");
    return 0;
}