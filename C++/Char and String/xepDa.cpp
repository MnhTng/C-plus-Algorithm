#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if( s.size() > n )
        s = s.substr( 0, n );
    int count = 0;
    for( int i = 0; i < s.size() - 1; i++ ){
        if( s[i] == s[i + 1] )
            count++;
    }
    cout << count << endl;
    system("pause");
    return 0;
}