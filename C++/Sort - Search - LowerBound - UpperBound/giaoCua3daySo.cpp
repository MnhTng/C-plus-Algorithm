#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n, p;
        cin >> m >> n >> p;
        vector<int> v1( m ), v2( n ), v3( p ), giao;
        for( int &x : v1 )
            cin >> x;
        for( int &x : v2 )
            cin >> x;
        for( int &x : v3 )
            cin >> x;
        sort( v2.begin(), v2.end() );
        sort( v3.begin(), v3.end() );
        for( int x : v1 ){
            if( binary_search( v2.begin(), v2.end(), x  ) ){
                if( binary_search( v3.begin(), v3.end(), x ) )
                    cout << x << " ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}