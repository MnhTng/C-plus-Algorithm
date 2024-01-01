#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        map<char, int> mp;
        for( char x : s )
            mp[x]++;
        for( auto ite : mp ){
            if( ite.second == 1 )
                cout << ite.first;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}