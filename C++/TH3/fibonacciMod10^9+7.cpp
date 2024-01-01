/*
    ( a + b ) % p = [ ( a % p ) + ( b % p ) ] % p
*/

#include <bits/stdc++.h>
using namespace std;

int fibo[1001];

void mod(){
    fibo[0] = 0;
    fibo[1] = 1;    
    for( int i = 2; i <= 1000; i++ ){
        fibo[i] = fibo[i-1] + fibo[i-2];
        fibo[i] %= (int)(1e9+7);
    }
}

int main(){
    int t;
    cin >> t;
    mod();
    while( t-- ){
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
    system("pause");
    return 0;
}