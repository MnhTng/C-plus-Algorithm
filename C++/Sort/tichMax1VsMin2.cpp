#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        long arr1[m], arr2[n];
        for( long &x : arr1 )
            cin >> x;
        for( long &x : arr2 )
            cin >> x;
        long max = *max_element( arr1, arr1 + m );
        long min = *min_element( arr2, arr2 + n );
        cout << (long long)( max * min ) << endl; 
    }
    system("pause");
    return 0;
}