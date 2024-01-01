#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello";
    string t = s;
    reverse( s.begin(), s.end() );
    if( s == t )
        cout << "1" << endl;
    else
        cout << "0" << endl;
    system("pause");
    return 0;
}