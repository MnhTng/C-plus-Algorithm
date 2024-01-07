#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long l, r;
        cin >> l >> r;
        long scs = r - l + 1;
        cout << ( ( r + l ) * scs ) / 2 << endl;
    }
    system("pause");
    return 0;
}