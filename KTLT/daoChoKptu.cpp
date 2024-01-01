#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        int k;
        cin >> s >> k;
        vector<string> v;

        string path = "";
        for( char x : s ){
            if( x != ',' )
                path += x;
            else{
                v.push_back( path );
                path = "";
            }
        }
        v.push_back( path );

        reverse( v.begin(), v.begin() + k );
        for( int i = 0; i < v.size(); i++ ){
            cout << v[i];

            if( i < v.size() - 1 )
                cout << ",";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}