#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;

        long long result = 2;
        while( n % 2 == 0 )
            n /= 2;

        for( long long i = 3; i <= sqrt ( n ); i += 2 ){
            if( n % i == 0 ){
                result = i;

                while( n % i == 0 )
                    n /= i;
            }
        }

        if( n > 1 )
            result = n;
        
        cout << result << endl;
    }
    system("pause");
    return 0;
}