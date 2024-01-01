#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for( int &x : arr )
            cin >> x;
        
        int l = 0, r = 0, count = 0;
        long long sum = 0;
        while( sum < k && r < n ){
            sum += arr[r];
            while( sum >= k ){
                sum -= arr[l];
                count += n - r;
                l++;
            }
            r++;
        }

        cout << count << endl;
    }
    system("pause");
    return 0;
}