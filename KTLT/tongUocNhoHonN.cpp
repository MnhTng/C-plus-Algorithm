#include <bits/stdc++.h>
using namespace std;

long long sum( long n ){
    long long sum = 0;
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 ){
            sum += i;
            if( i != n / i )
                sum += n / i;
        }
    }
    return sum + 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long n;
        cin >> n;
        cout << sum( n ) << endl;
    }
    system("pause");
    return 0;
}