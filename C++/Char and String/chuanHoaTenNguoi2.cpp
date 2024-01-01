#include <bits/stdc++.h>
using namespace std;

string standardize( string s ){
    for( int i = 0; i < s.size(); i++ ){
        if( i == 0 )
            s[i] = toupper( s[i] );
        else    
            s[i] = tolower( s[i] );
    }
    return s.substr( 0, s.size() );
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s;
        getline( cin, s );
        vector<string> name;
        stringstream ss( s );
        string detach;
        while( ss >> detach )
            name.push_back( detach );
        string temp = name[name.size() - 1];
        for( int i = 0; i < temp.size(); i++ ){
            temp[i] = toupper( temp[i] );
        }
        cout << temp << ", ";
        for( int i = 0; i < name.size() - 1; i++ ){
            cout << standardize( name[i] ) << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0; 
}