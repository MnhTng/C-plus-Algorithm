#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    set<string> s;
    for( int i = 0; i < n; i++ ){
        string x;
        getline( cin, x );
        s.insert( x );
    }
    cout << s.size() << endl;
    system("pause");
    return 0;
}