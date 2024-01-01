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
        
        int l = 0, r = 0;
        int result = n;
        long long sum = 0;

        while( r < n ){
            while( sum < k ){
                sum += arr[r];
                r++;
            }
            while( sum >= k ){
                sum -= arr[l];
                l++;
            }
            if( result > r - l + 1 )
                result = r - l + 1;
        }

        cout << result << endl;
    }
    system("pause");
    return 0; 
}