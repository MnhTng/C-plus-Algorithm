#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        multiset<char> sapxep;
        for( char x : s )
            sapxep.insert( x );
        for( char x : sapxep )
            cout << x;
        cout << endl;
    }
    system("pause");
    return 0;
}