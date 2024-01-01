// 2 So nguyen to cung nhau la 2 So co UCLN = 1
/*
Thuat toan Euclid
    g = ucln( a, b ) = ucln( b, r0 ) = ucln( r0, r1 ) = .. = ucln( r[n-2] , r[n-1] ) = r[n-1]
    voi r0 la so du cua a va b, r1 la so du cua b va r0, ... ( a > b )
    => r[k] = r[k-2] MOD r[k-1]
                    ( Tim den khi nao r[n] = 0 thi ucln cua a va b la r[n-1] )
*/

#include <iostream>
using namespace std;

int gcd( int a, int b ){
    while( b != 0 ){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int a, b;
    cout << "Nhap 2 so nguyen a, b : ";
    cin >> a >> b;
    int m, n;
    if( a < b){
        m = b;
        n = a;
    }
    else{
        m = a;
        n = b;
    }
    cout << "Cap so nguyen to cung nhau : " << endl;
    for( int i = n; i < m; i++ ){
        for( int j = i + 1; j <= m; j++ ){
            if( gcd( j, i ) == 1 )
                cout << "(" << i << "," << j << ")" << endl;
        }
    }
    system("pause");
    return 0;
}