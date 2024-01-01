#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[n][n];
        for( int i = 1; i <= n; i++ ){
            for( int j = 1; j <= n; j++ )
                cin >> arr[i][j];
        }

        int temp[n];
        for( int i = 0; i < n; i++ )
            temp[i] = i + 1;

        vector<vector<int>> v;
        do{
            int sum = 0;
            for( int i = 1; i <= n; i++ ){
                int j = temp[i - 1];
                sum += arr[i][j];
            }
            if( sum == k ){
                vector<int> save( temp, temp + n );
                v.push_back( save );
            }
        }
        while( next_permutation( temp, temp + n ) );
        cout << v.size() << endl;
        for( vector<int> ite : v ){
            for( int x : ite )
                cout << x << " ";
            cout << endl;
        }
    }
    system("pause");
    return 0;
}