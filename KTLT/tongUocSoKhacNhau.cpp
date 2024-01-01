#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n, m;
        cin >> n >> m;

        long long sum = 0;
        for( int i = 1; i <= sqrt( n ); i++ ){
            if( n % i == 0 && m % i != 0 )
                sum += i;

            if( n % ( n / i ) == 0 && n / i != i && m % ( n / i ) != 0 )
                sum += n / i;
        }

        cout << sum << endl;
    }
    system("pause");
    return 0;
}