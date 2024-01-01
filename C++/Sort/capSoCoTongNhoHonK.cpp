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
        int temp = k - 1, count = 0, min = *min_element( arr, arr + n );
        while( temp >= min ){
            for( int i = 0; i < n; i++ ){
                if( temp == arr[i] * 2 )
                    count += mp[arr[i]] - 1;
                else
                    count += mp[temp - arr[i]];
            }
            temp--;
        }
        cout << count / 2 << endl;
    }
    system("pause");
    return 0;
}