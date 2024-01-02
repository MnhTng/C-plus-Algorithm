#include <bits/stdc++.h>
using namespace std;

int factorial( int n ){
    if( n == 1 )
        return 1;
    return n * factorial( n - 1 );
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;

        cout << factorial( n ) << endl;
    }
    system("pause");
    return 0;
}