#include <bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        int prefix[n + 1] =  { 0 };
        for( int i = 1; i <= n; i++ )
            cin >> arr[i];
        
        for( int i = 1; i <= n; i++ )
            prefix[i] = prefix[i - 1] + arr[i];

        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    system("pause");
    return 0;
}