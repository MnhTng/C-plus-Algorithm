#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        long long arr[n];
        for( long long i = 0; i < n; i++ )
            cin >> arr[i];
        
        long long sum = -10000000000000000;
        for( long long k = 1; k < n; k++ ){
            long long temp = accumulate( arr, arr + k, 0 );
            if( sum < temp )
                sum = temp;
            for( long long i = k; i < n; i++ ){
                temp = temp + arr[i] - arr[i - k];
                if( sum < temp )
                    sum = temp;
            }
        }
        long long temp = accumulate( arr, arr + n, 0 );
        if( sum < temp )
            sum = temp;

        cout << sum << endl;
    }
    system("pause");
    return 0;
}