#include <bits/stdc++.h>
using namespace std;

int isPrime( long n ){
    int i;
    for( i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long n;
        cin >> n;
        long i;
        int count = 0;
        for( i = 2; i <= sqrt( n ); i++ ){
            if( isPrime( i ) && n % i == 0 ){
                count++;
                while( n % i == 0 )
                    n /= i;
            }
        }
        if( n != 1 && n != 0 )
            count++;
        cout << count << endl;
    }
    system("pause");
    return 0;
}