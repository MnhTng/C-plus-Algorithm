#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s;
        getline( cin, s );
        stringstream ss( s );
        string detach;
        multiset<string> sapxep;
        while( ss >> detach )
            sapxep.insert( detach );
        for( string x : sapxep )
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}