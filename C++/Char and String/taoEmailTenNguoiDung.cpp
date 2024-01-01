#include <bits/stdc++.h>
using namespace std;

string firstIndex( string s ){
    s[0] = tolower( s[0] );
    return s;
}

int main(){
    int t;
    cin >> t;
    map<string, int> mp;
    cin.ignore();
    for( int i = 0; i < t; i++ ){
        string s;
        getline( cin, s );
        vector<string> name;
        stringstream ss( s );
        string detach;
        while( ss >> detach )
            name.push_back( detach );
        string temp = name[name.size()-1], fullname;
        for( int i = 0; i < temp.size(); i++ )
            temp[i] = tolower( temp[i] );
        fullname = temp;
        for( int i = 0; i < name.size() - 1; i++ ){
            string j = firstIndex( name[i] );
            fullname = fullname + j.substr( 0, 1 );
        }
        mp[fullname]++;
        if( mp[fullname] == 1 )
            cout << fullname << "@gmail.com" << endl;
        else
            cout << fullname << mp[fullname] - 1 << "@gmail.com" << endl;
    }
    system("pause");
    return 0;
}