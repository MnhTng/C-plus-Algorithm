#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        vector<int> v;

        int nhiet_do = 0;
        for( char x : s ){
            if( x != ',' )
                nhiet_do = nhiet_do * 10 + ( x - '0' );
            else{
                v.push_back( nhiet_do );
                nhiet_do = 0;
            }
        }

        if( nhiet_do )
            v.push_back( nhiet_do );
        
        for( int i = 0; i < v.size() - 1; i++ ){
            int check = 1;

            for( int j = i + 1; j < v.size(); j++ ){
                if( v[j] > v[i] ){
                    check = 0;
                    v[i] = j - i;
                    break;
                }
            }

            if( check )
                v[i] = 0;
        }
        v[v.size() - 1] = 0;

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