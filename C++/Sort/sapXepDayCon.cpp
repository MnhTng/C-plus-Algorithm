#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int &x : arr )
            cin >> x;
        int l = 0, r = 0;
        for( int i = 1; i < n; i++ ){
            if( arr[i] < arr[i - 1] ){
                l = i - 1;
                break;
            }
        }
        for( int i = n - 1; i > 0; i-- ){
            if( arr[i] < arr[i - 1] ){
                r = i;
                break;
            }
        }
        int min = *min_element( arr + l, arr + r + 1 );
        int max = *max_element( arr + l, arr + r + 1 );
        for( int i = 0; i < n; i++ ){
            if( arr[i] > min ){
                l = i;
                break;
            }
        }
        for( int i = n - 1; i >= 0; i-- ){
            if( arr[i] < max ){
                r = i;
                break;
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    system("pause");
    return 0;
}