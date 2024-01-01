#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline( cin, s1 );
    cin >> s2;
    stringstream ss( s1 );
    string detach;
    while( ss >> detach ){
        if( detach == s2 )
            continue;
        cout << detach << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}