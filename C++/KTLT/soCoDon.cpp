#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        map<int, int> mp;
        for( int i = 0; i < n; i++ ){
            int x;
            cin >> x;
            mp[x]++;
        }

        int count = 0;
        for( auto ite : mp ){
            if( ite.second == 1 )
                count++;
        }

        cout << count << endl;
    }
    system("pause");
    return 0;
}