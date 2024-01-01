#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long n, l;
        cin >> n >> l;
        
        int arr[n + l];
        for( long i = l; i < n + l; i++ )
            arr[i] = 1;

        for( long i = 0; i < n - 1; i++ ){
            long x;
            cin >> x;
            arr[x] = 0;
        }

        for( long i = l; i < n + l; i++ ){
            if( arr[i] ){
                cout << i << endl;
                break;
            }
        }
    }
    system("pause");
    return 0;
}