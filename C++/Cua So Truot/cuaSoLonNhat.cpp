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

        long long sum = accumulate( arr, arr + k, 0 );
        long long result = sum;
        int index = 0;

        for( int  i = k; i < n; i++ ){
            sum = sum + arr[i] - arr[i - k];
            if( sum > result ){
                result = sum;
                index = i - k + 1;
            }
        }

        cout << result << endl;
        for( int i = index; i < index + k; i++ )
            cout << arr[i] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}