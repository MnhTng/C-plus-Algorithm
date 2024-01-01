#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline( cin, s );
    bool check = true;
    for( int i = 0; i < s.size() / 2; i++ ){
        if( (int)s[i] != (int)s[s.size() - 1 - i] )
            check = false;
    }
    if( check )
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;
    system("pause");
    return 0;
}