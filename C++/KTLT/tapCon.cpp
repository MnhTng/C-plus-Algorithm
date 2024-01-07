#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;;
    cin >> t;
    while( t-- ){
        int  n;;
        cin >> n;
        map<int, int> mp;

        for( int i = 0; i < n; i++ ){
            int x;
            cin >> x;
            mp[x]++;
        }

        long count = 1;
        vector<int> v;
        for( auto ite : mp ){
            count *= ite.second + 1;
            for( int i = 0; i < ite.second; i++ )
                v.push_back( ite.first );
        }

        cout << count - 1 << " [";
        for( int i = 0; i < v.size(); i++ ){
            cout << v[i];
            if( i < v.size() - 1 )
                cout << ", ";
            else
                cout << "]" << endl;
        }
    }
    system("pause");
    return 0;
}