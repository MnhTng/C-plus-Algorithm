#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        
        string t = s;
        reverse( s.begin(), s.end() );

        if( s == t )
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    system("pause");
    return 0;
}