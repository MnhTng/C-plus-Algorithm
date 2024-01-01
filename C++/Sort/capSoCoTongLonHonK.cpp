#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[n];
        map<int, int> mp;
        for( int &x : arr ){
            cin >> x;
            mp[x]++;
        }
        int count = 0;
        for( int i = 0; i < n; i++ ){
            int temp = k - arr[i];
            for( int j = 0; j < n; j++ ){
                if( arr[j] > temp ){
                    if( arr[i] + arr[j] == 2 * arr[i] )
                        count += mp[arr[j]] - 1;
                    else
                        count += mp[arr[j]];
                }
            }
        }
        cout << count / 2 << endl;
    }
    system("pause");
    return 0;
}