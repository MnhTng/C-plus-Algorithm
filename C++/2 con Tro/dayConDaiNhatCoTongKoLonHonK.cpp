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
        int result = 0;
        long long sum = 0;

        while( r < n ){
            while( sum <= k ){
                sum += arr[r];
                r++; 
            }
            if( result < r - 1 - l )
                result = r - 1 - l;
            while( sum > k ){
                sum -= arr[l];
                l++;
            }
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}