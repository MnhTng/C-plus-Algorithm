#include <bits/stdc++.h>
using namespace std;

long long surplus( string s1, string s2 ){
    long long num2 = stoll( s2 );
    long long num1 = 0;
    for( char x : s1 ){
        num1 = ( num1 * 10 + (int)x - 48 ) % num2;
    }
    return num1;
}

int gcd( long long a, long long b ){
    while( b != 0 ){
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s1, s2;
        cin >> s1 >> s2;
        long long temp = surplus( s1, s2 );
        long long num = stoll( s2 );
        cout << gcd( num, temp ) << endl;
    }
    system("pause");
    return 0;
}