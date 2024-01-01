#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string n;
        getline( cin, n );
        if( n.size() > 10000 )
            return 0;
        else{
            // set<char> s;
            // for( char x : n )
            //     s.insert( tolower( x ) );
            // if( s.size() == 26 )
            //     cout << "YES" << endl;
            // else
            //     cout << "NO" << endl;
 
            map<char, int> mp;
            for( char x : n ){
                mp[x]++;
            }
            char index = 'a';
            bool check = true;
            while( index <= 'z' ){
                if( mp.count( index ) == 0 && mp.count( toupper( index ) ) == 0 )
                    check = false;
                index++;
            }
            // khi dung for( auto ite : mp ) thi khong the su dung count, find, ...
            
            if( check )
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    system("pause");
    return 0;
}