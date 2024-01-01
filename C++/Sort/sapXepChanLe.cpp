#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        vector<int> v( n ), v1, v2;
        for( int &x : v ){
            cin >> x;
            if( x % 2 == 1 )
                v1.push_back( x );
            else
                v2.push_back( x );
        }
        sort( v1.begin(), v1.end(), greater<int>() );
        sort( v2.begin(), v2.end() );
        for( int x : v ){
            if( x % 2 == 1 ){
                cout << v1.at( 0 ) << " ";
                v1.erase( v1.begin() );
            }
            else{
                cout << v2.at( 0 ) << " ";  
                v2.erase( v2.begin() ); 
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}