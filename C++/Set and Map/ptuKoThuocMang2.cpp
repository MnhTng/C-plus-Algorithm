#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        if( m, n < 1 || m, n > 1000 )
            return 0;
        else{
            map<int, int> mp;
            map<int, int> mpPlus;
            int i, count = 0;
            for( i = 0; i < m; i++ ){
                int x;
                cin >> x;
                mp[x] = 1;
            }
            for( i = 0; i < n; i++ ){
                int x;
                cin >> x;
                mpPlus[x]++;
                if( mp.count( mpPlus[x] ) )
                    count++;
            }
            cout << count << endl;
        }
    }
    system("pause");
    return 0;
}