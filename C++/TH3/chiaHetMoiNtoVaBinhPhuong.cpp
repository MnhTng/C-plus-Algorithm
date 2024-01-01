#include <bits/stdc++.h>
using namespace std;

int sodep( int n ){
    int cond = 0;
    for( int i = 2; i <= sqrt( n ); i++ ){
        int count = 0;
        while( n % i == 0 ){
            count++;
            n /= i;
        }
        if( count == 1 )
            return 0;
        if( count >= 2 )
            cond = 1;
    }
    if( n != 1 )
        return 0;
    return cond;
}

int main(){
    int l, r;
    cin >> l >> r;
    int i, j;
    for( i = l; i <= r; i++ ){
        if( sodep( i ) )
            cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}