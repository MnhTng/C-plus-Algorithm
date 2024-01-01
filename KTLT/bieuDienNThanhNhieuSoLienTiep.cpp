#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        int count = 0;

        int k = sqrt( ( ( 2 * n ) + 1.0 / 4 ) - 1.0 / 2 );
        
        for( int i = 2; i <= k; i++ ){
            if( i % 2 == 0 && ( 1.0 * n ) / i == n / i + 0.5 )
                count++;
            else if( i % 2 == 1 && n % i == 0 )
                count++;
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
} 