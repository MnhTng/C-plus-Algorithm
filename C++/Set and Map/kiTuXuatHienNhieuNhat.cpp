#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string n;
        getline( cin, n );
        if( n.size() < 1 || n.size() >100000 )
            return 0;
        else{
            map<char, int> mp;
            for( char x : n ){
                mp[x]++;
            }
            int max = 0;
            char kq;
            for( auto ite : mp ){
                if( ite.second > max ){
                    max = ite.second;
                    kq = ite.first;
                }
            }
            cout << kq << endl;
        }
    }
    system("pause");
    return 0;
}