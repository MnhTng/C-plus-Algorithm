#include <bits/stdc++.h>
using namespace std;

int same( string s1, string s2 ){
    if( s1.size() != s2.size() )
        return 0;
    for( int i = 0; i < s1.size(); i++ ){
        if( (int)s1[i] != (int)s2[i] && (int)s1[i] != (int)s2[i] - 32 )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s1, s2;
        getline( cin, s1 );
        cin >> s2;
        stringstream ss( s1 );
        string detach;
        while( ss >> detach ){
            if( same( detach, s2 ) == 0 )
                cout << detach << " ";
        }
        cout << endl;
        cin.ignore();
    }
    system("pause");
    return 0;
}