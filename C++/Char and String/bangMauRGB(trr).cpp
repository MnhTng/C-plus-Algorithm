#include <bits/stdc++.h>
using namespace std;

long long factorial( int n ){
    long long result = 1;
    for( int i = 2; i <= n; i++ )
        result *= i;
    return result;
}

long long result( int n, int r, int g, int b ){
    long long count = 0;
    long long Tu = factorial( n );
    for( int i = r; i < n; i++ ){
        int check1 = n - i;
        if( g + b <= check1 ){     
            for( int j = g; j < check1; j++ ){
                int check2 = check1 - j;
                if( check2 >= b ){
                    count += Tu / ( factorial( i ) * factorial(j) * factorial( check2 ) );
                }
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;   
    while( t-- ){
        int n, r, g, b;
        cin >> n >> r >> g >> b;
        cout << result( n, r, g, b ) << endl;
    }
    system("pause");
    return 0;
}