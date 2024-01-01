#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        queue<char> q;
        map<char, int> mp;

        for( char x : s ){
            if( !mp[x] )
                q.push( x );
            
            mp[x]++;
        }

        
    }
}