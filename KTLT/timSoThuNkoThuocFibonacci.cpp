#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long n;
        cin >> n;

        int fibo[50];
        fibo[0] = 0, fibo[1] = 1;
        for( int i = 2; i < 50; i++ )
            fibo[i] = fibo[i - 2] + fibo[i - 1];
        
        int pos = 0, temp = n, check;
        for( int i = 3; i < 50; i++ ){
            pos += fibo[i + 1] - fibo[i] - 1;
            temp -= fibo[i + 1] - fibo[i] - 1;
            if( temp <= 0 ){
                check = i;
                break;
            }
        }

        pos -= fibo[check + 1] - fibo[check] - 1;
        n -= pos;
        cout << fibo[check] + n << endl;
    }
    system("pause");
    return 0;
}