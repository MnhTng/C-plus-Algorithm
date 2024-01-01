#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int i = 0;
        vector<long> v;
        while( i < s.size() ){
            long num = 0, cond = 0;
            while( '0' <= (int)s[i] && (int)s[i] <= '9' ){
                num = num * 10 + ( (int)s[i] - '0' );
                cond = 1;
                i++;
            }
            if( num && cond )
                v.push_back( num );
            else    
                i++;
        }
        long sum = 0;
        for( int x : v )
            sum += x;
        cout << sum << endl;
    }
    system("pause");
    return 0;
}