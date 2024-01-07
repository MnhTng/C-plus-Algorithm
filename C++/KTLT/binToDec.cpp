#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;

        long long sum = 0;
        for( int i = 0; i < s.size(); i++ ){
            if( s[i] == '1' )
                sum += 1ll << ( s.size() - 1 - i );
        }

        cout << sum << endl;
    }
    system("pause");
    return 0;
}