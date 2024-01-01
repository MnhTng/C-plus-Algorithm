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
        
        multiset<int> s;
        int l = 0, r = 0;
        int result = 0;
        s.insert( arr[r] );

        while( r < n && *s.rbegin() - *s.begin() <= k ){
            result += r - l + 1;
            r++;
            s.insert( arr[r] );
            while( *s.rbegin() - *s.begin() > k ){
                s.erase( s.find( arr[l] ) );
                l++;
            }
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}