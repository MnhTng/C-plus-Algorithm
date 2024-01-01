#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        vector<int> v;

        int num = 0;
        for( char x : s ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                v.push_back( num );
                num = 0;
            } 
        }
        v.push_back( num );

        int max = *max_element( v.begin(), v.end() );
        cout << max << endl;
    }
    system("pause");
    return 0;
}