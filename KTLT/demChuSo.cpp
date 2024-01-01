#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int a, b;
        cin >> a >> b;
        map<char, long long> mp;
        for( char i = '0'; i <= '9'; i++ )
            mp[i] = 0;
        
        if( a == b ){
            string s = to_string( a );
            for( char x : s )
                mp[x] += 2;
        }
        else{
            int begin = min( a, b );
            int end = max( a, b );
            for( int i = begin; i <= end; i++ ){
                string s = to_string( i );
                for( char x : s )
                    mp[x]++;
            }
        }
        
        for( auto ite : mp )
            cout << ite.second << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}