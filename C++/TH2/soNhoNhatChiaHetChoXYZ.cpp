// De tim so chia het cho x, y, z ta can tim BCNN  cua x, y, z 
/* De tim so nho nhat >= n, chia het cho k thi su dung cong thuc:
                        ( ( n + k - 1 ) / k ) * k
*/

#include <bits/stdc++.h>
using namespace std;

int gcd( int a, int b ){
    while( b != 0 ){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm( int a, int b ){
    return ( a * b ) / gcd( a, b );
}

void kq( int x, int y, int z, int n ){
    long long bcnn = lcm( lcm( x, y ), z );
    long long temp = pow( 10, n - 1 );
    long long kq = ( ( temp + bcnn - 1 ) / bcnn ) * bcnn;
    int cond = 0;
    if( kq < pow( 10, n ) ){
        cout << kq << endl;
        cond = 1;
    }
    if( !cond )
        cout << "-1" << endl;
}

int main(){
    int x, y, z, n;
    cin >> x >> y >> z >> n;
    if( n <= 16 ){
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort( v.begin(), v.end(), greater<int>()  );
        x = v.at( 0 ), y = v.at ( 1 ), z = v.at ( 2 );
        kq( x, y, z, n );
    }
    system("pause");
    return 0;
}