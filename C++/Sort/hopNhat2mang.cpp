#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        vector<long> v1( m ), v2( n ), v;
        for( long &x : v1 ){
            cin >> x;
            v.push_back( x );
        }
        for( long &x : v2 ){
            cin >> x;
            v.push_back( x );
        }
        sort( v.begin(), v.end() );
        for( long x : v )
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}