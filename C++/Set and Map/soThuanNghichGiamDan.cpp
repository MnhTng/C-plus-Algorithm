#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    if( s.size() <= 1 )
        return 0;
    string temp = s;
    reverse( s.begin(), s.end() );
    return temp == s;
}

int comp( pair<string, int> &a, pair<string, int> &b ){
    return a.first.size() != b.first.size() ? a.first.size() > b.first.size() : a > b;
}

int main(){
    map<string, int> mp;
    string s;
    getline( cin, s );
    stringstream ss( s );
    string detach;
    while( ss >> detach ){
        if( check( detach ) )
            mp[detach]++;
    }

    vector<pair<string, int>> v;
    for( auto ite : mp )
        v.push_back( ite );
    
    sort( v.begin(), v.end(), comp );
    for( auto ite : v )
        cout << ite.first << " " << ite.second << endl;
    system("pause");
    return 0;
}