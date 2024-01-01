#include <bits/stdc++.h>
using namespace std;

string lowerString( string s ){
    for( int i = 0; i < s.size(); i++ )
        s[i] = tolower( s[i] );
    return s;
}

int main(){
    string s;
    getline( cin, s );
    unordered_map<string, int> mp;
    stringstream ss( s );
    string detach;
    while( ss >> detach )
        mp[lowerString( detach )]++; 
    string temp[1001];
    int freq[1001], count = 0;
    for( auto ite : mp ){
        temp[count] = ite.first;
        freq[count] = ite.second;
        count++;
    }
    for( int i = count - 1; i >= 0; i-- )
        cout << temp[i] << " " << freq[i] << endl;
    system("pause");
    return 0;
}