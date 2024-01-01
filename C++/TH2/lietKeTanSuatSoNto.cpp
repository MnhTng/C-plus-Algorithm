#include <bits/stdc++.h>
using namespace std;

void primeDigits( long long n ){
    long long rev = 0;
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    while( n ){
        rev = rev * 10 + n % 10;
        if( n % 10 == 2 )   c2++;
        if( n % 10 == 3 )   c3++;
        if( n % 10 == 5 )   c5++;
        if( n % 10 == 7 )   c7++;
        n /= 10;
    }

    int cond2 = 1, cond3 = 1, cond5 = 1, cond7 = 1;
    while( rev ){
        int temp = rev % 10;
        if( temp == 2 && cond2 ){
            cout << temp << " " << c2 << endl;
            cond2 = 0;
        }
        if( temp == 3 && cond3 ){
            cout << temp << " " << c3 << endl;
            cond3 = 0;
        }
        if( temp == 5 && cond5 ){
            cout << temp << " " << c5 << endl;
            cond5 = 0;
        }
        if( temp == 7 && cond7 ){
            cout << temp << " " << c7 << endl;
            cond7 = 0;
        }
        rev /= 10;
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        primeDigits( n );
    }
    system("pause");
    return 0;
}