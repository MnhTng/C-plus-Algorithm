/*
Voi n = 10, k = 3 :
    n  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10
    mod|  1  |  2  |  0  |  1  |  2  |  0  |  1  |  2  |  0  |  1
So cap [1, 2, 0] : 
    n / k
So du : 
    n % k
*/

#include <bits/stdc++.h>
using namespace std;

long long sumMod( int n, long long k ){
    long long sum1 = k * ( k - 1 ) / 2;
    int sum2 = ( n % k + 1 ) * ( n % k ) / 2;
    return sum1 * ( n / k ) + sum2;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        long long k;
        cin >> n >> k;
        if( 0 <= n <= 1000 && 0 <= k <= 1000000000000 ){
            cout << sumMod( n, k ) << endl;
        }
    }
    system("pause");
    return 0;
}