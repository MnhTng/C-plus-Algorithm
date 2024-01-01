#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s1, s2;
        getline( cin, s1 );
        getline( cin, s2 );
        set<string> s;
        stringstream ss1( s1 ), ss2( s2 );
        string detach;
        while( ss2 >> detach )
            s.insert( detach );
        while( ss1 >> detach ){
            if( s.count( detach ) == 0 ){
                cout << detach << " ";
                s.insert( detach );
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}