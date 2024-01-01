#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k, b;
        cin >> n >> k >> b;
        int arr[n] = { 0 };
        for( int i = 1; i <= b; i++ ){
            int x;
            cin >> x;
            arr[x] = 1;
        }
        
        int count = 0;
        for( int i = 1; i <= k; i++ ){
            if( arr[i] == 1 )
                count++;
        }
        int save = count;
        for( int i = k + 1; i <= n; i++ ){
            count = count + arr[i] - arr[i - k];
            if( count < save )
                save = count;
        }

        cout << save << endl;
    }
    system("pause");
    return 0;
}