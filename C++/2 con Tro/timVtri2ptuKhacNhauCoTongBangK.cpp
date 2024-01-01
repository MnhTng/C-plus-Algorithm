#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v( n );
        for( int i = 0; i < n; i++ ){
            cin >> v[i].first;
            v[i].second = i;
        }
        sort( v.begin(), v.end() );

        int l = 0, r = n - 1;
        int check = 1;
        while( l < r ){
            if( v[l].first + v[r].first < k )
                l++;
            else if( v[l].first + v[r].first > k )
                r--;
            else{
                cout << v[l].second +  1 << " " << v[r].second + 1 << endl;
                check = 0;
                break;
            }
        }

        if( check )
            cout << "IMPOSSIBLE" << endl;
    }
    system("pause");
    return 0;
}