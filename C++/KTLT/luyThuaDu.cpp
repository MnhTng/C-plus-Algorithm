#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long a, n;
        cin >> a >> n;
        long long result = 1;
        while( n ){
            if( n % 2 == 1 ){
                result *= a;
                result %= (long long)( 1e9 + 7 );
            }
            a *= a;
            a %= (long long)( 1e9 + 7 );
            n /= 2;
        }
        cout << result << endl;
    }
    system("pause");
    return 0;
}