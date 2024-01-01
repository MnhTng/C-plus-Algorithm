#include <bits/stdc++.h>
using namespace std;

int comp( pair<char, int> a, pair<char, int> b ){
    return a.second > b.second;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        map<char, int> mp;
        for( char x : s )
            mp[x]++;
        vector<pair<char, int>> v( mp.begin(), mp.end() );
        sort( v.begin(), v.end(), comp );
        for( auto ite : mp ){
            if( ite.second <= ( s.size() - ite.second ) || ite.second - ( s.size() - ite.second ) < 2 )
                cout << "1" << endl;
            else
                cout << "0" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}