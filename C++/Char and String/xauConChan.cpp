// xau con la xau chan neu chu so cuoi cung cua xau la so chan

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
    for( int i = 0; i < s.size(); i++ ){
        if( s[i] % 2 == 0 )
            count += i + 1;
    }
    cout << count << endl;
    system("pause");
    return 0; 
}