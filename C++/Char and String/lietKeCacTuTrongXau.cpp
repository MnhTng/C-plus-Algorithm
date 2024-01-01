#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline( cin, s );
    stringstream ss( s );
    string detach;
    while( ss >> detach )
        cout << detach << endl;
    system("pause");
    return 0;
}