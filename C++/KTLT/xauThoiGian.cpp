#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        if( s[1] == '?' ){
            if( s[2] <= '3' || s[2] == '?' )
                s[1] = '2';
            else if( s[2] > '3' )
                s[1] = '1'; 
        }
        if( s[2] == '?' ){
            if( s[1] == '2' )
                s[2] = '3';
            else
                s[2] = '9';
        }
        if( s[4] == '?' )
            s[4] = '5';
        if( s[5] == '?' )
            s[5] = '9';
        
        cout << s << endl;
    }
    system("pause");
    return 0;
}