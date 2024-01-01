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
        int check = 0;
        if( s.size() % 2 == 0 ){
            for( auto ite : mp ){
                if( ite.second % 2 == 1 )
                    check = 1;
            }
        }
        else{
            for( auto ite : mp ){
                if( ite.second % 2 == 1 ){
                    if( check == 0 )
                        check = 2;
                    else
                        check = 1;
                }
            }
        }
        if( check == 0 || check == 2 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}