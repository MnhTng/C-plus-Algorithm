#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if( s.size() > n )
            s = s.substr( 0, n );
        bool check = false;
        for( int i = 0; i < s.size();    i++ ){
            if( s[i] == '8' && i + 11 < s.size() )
                check = true;
        }
        if( check )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}