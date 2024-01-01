#include <bits/stdc++.h>
using namespace std;

string lowerString( string s ){
    for( int i = 0; i < s.size(); i++ ){
        s[i] = tolower( s[i] );
    }
    return s;
}

int main(){
    string s;
    getline( cin, s );
    map<string, int> mp;
    stringstream ss( s );
    string detach;
    while( ss >> detach )
        mp[lowerString( detach )]++;
    for( auto ite : mp )
        cout << ite.first << " " << ite.second << endl;
    system("pause");
    return 0;
}