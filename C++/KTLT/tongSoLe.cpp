#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long l, r;
        cin >> l >> r;
        long long sum;
        if( l % 2 == 0 )
            l += 1;
        if( r % 2 == 0 )
            r -= 1;
        int ssh = ( r - l ) / 2 + 1;
        sum = ( r + l ) * ssh / 2;
        cout << sum << endl;
    }
    system("pause");
    return 0;
}