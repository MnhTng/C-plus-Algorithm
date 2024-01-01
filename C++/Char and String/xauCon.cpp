#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int pos = s2.find( s1 );
    if( pos != string::npos )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    system("pause");
    return 0;
}