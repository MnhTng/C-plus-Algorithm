#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s;
        int n;
        cin >> n;
        cin.ignore();
        getline( cin, s );

        stringstream ss( s );
        string detach;
        set<string> craft;
        int count = 0;
        while( ss >> detach ){
            craft.insert( detach );
            count++;
            if( count == n )
                break;
        }

        for( auto x : craft )
            cout << x;
        cout << endl;
    }
    system("pause");
    return 0;
}