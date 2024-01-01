#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        map<char, int> mp;
        int cond = 0;
        char c = s[0];
        for( char x : s ){
            mp[x]++;
            if( c == x )
                cond++;
        }   
        int count = s.size();
        for( auto ite : mp ){
            count += ( ite.second * ( ite.second - 1 ) ) / 2;
            if( s.at( 0 ) == ite.first && s.at( s.size() - 1 ) == ite.first ){
                if( cond == s.size() )
                    continue;
                else
                    count -= 1;
            }
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
}