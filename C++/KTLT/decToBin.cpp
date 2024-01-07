#include <bits/stdc++.h>
using namespace std;

void change( long long n ){
    string s = "";
    while( n ){
        string temp = to_string( n % 2 );
        s = temp + s;
        n /= 2;
    }

    int i = 0;
    while( s[i] == '0' )
        i++;
    s = s.substr( i, s.size() - i );
    cout << s << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        change( n );
    }
    system("pause");
    return 0;
}