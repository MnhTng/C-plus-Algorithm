#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        vector<int> a( m ), b( n );
        set<int> hop, giao1, giao2;
        for( int &x : a ){
            cin >> x;
            hop.insert( x );
            giao1.insert( x );
        }
        for( int &x : b ){
            cin >> x;
            hop.insert( x );
            giao2.insert( x );
        }
        for( auto x : hop )
            cout << x << " ";
        cout << endl;
        for( int x : giao1 ){
            if( giao2.count( x ) )
                cout << x << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}