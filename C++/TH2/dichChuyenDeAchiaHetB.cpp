#include <bits/stdc++.h>
using namespace std;

long move( long a, long b ){
    if( a % b == 0 )
        return 0;
    return b - a % b;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long a, b;
        cin >> a >> b;
        cout << move( a, b ) << endl;
    }
    system("pause");
    return 0;
}