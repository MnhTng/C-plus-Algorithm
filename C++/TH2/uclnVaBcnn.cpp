/*
Tim UCLN thong qua thuat toan Euclid
    g = ucln( a, b ) = ucln( b, r0 ) = ucln( r0, r1 ) = .. = ucln( r[n-2] , r[n-1] ) = r[n-1]
    voi r0 la so du cua a va b, r1 la so du cua b va r0, ... ( a > b )
    => r[k] = r[k-2] MOD r[k-1]
                    ( Tim den khi nao r[n] = 0 thi ucln cua a va b la r[n-1] )

Tim BCNN thong qua UCLN
    bcnn( a, b ) = ( a * b ) / ucln( a, b )
*/
#include <iostream>
using namespace std;

long long gcd( long long a, long long b ){
    while( b != 0 ){
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm( long long a, long long b ){
    return ( a * b ) / gcd( a, b );
}

int main(){
    long long a, b;
    cout << "Nhap 2 so nguyen duong : ";
    cin >> a >> b;
    long long m, n;
    if( a > b ){
        m = a;
        n = b;
    }
    else{
        m = b;
        n = a;
    }
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la : " << gcd( m, n ) << endl;
    cout << "Boi chung nho nhat cua " << a << " va " << b << " la : " << lcm( m, n ) << endl;
    system("pause");
    return 0;
}