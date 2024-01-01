#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ )
            cin >> arr[i];
        
        int l = 0, r = 1;
        int max = 0, check = 1;
        while( r < n ){
            if( arr[r] > arr[l] ){
                if( max < arr[r] - arr[l] ){
                    max  = arr[r] - arr[l];
                    check = 0;
                }
                r++;
            }
            else{
                l++;
                r++;
            }
        }
        if( check )
            cout << "-1" << endl;
        else
            cout << max << endl;
    }
    system("pause");
    return 0;
}