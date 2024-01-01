#include <bits/stdc++.h>
using namespace std;

void mix( string &s1, string &s2, string &v, int n ){
    int j = 0;
    for( int i = 0; i < n; i++ ){
        v[j++] = s2[i];
        v[j++] = s1[i];
    }
    s1 = v.substr( 0, n );
    s2 = v.substr( n, n );
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        string s1, s2, s;
        cin >> n >> s1 >> s2 >> s;
        if( s1.size() > n )
            s1 = s1.substr( 0, n );
        if( s2.size() > n )
            s2 = s2.substr( 0, n );
        if( s.size() > 2 * n )
            s = s.substr( 0, 2 * n );
        

        int count = 0, cond = 0;
        string save1 = s1, save2 = s2, save = s;
        while( 1 ){
            mix( s1, s2, save, n );
            count++;
            if( save == s ){
                cout << count << endl;
                break;
            }
            if( save1 == s1 && save2 == s2 ){
                cond = 1;
                break;
            }
        }
        if( cond )
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
}