#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int k;
        cin >> k;
        double d = ceil( ( 1.0 * k ) / 2 );
        cout << 9 * pow( 10, d - 1 ) << endl;
    }
    system("pause");
    return 0;
}