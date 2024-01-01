#include <bits/stdc++.h>
using namespace std;

int longest( string s, int n ){
    int i = 0, size_max = 1;
    char s1 = s[0], s2 = s[1];
    while( i < n - 1 ){
        if( s1 > s2 ){
            i++;
            s1 = s[i];
            s2 = s[i + 1];
        }
        else if ( s1 == s2 ){
            i++;
            s2 = s[i + 1];
        }
        else{
            size_max++;
            i++;
            s1 = s[i];
            s2 = s[i + 1];
        }
    }
    return size_max;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        cout << 26 - longest( s, s.size() ) << endl;
    }
    system("pause");
    return 0;
}