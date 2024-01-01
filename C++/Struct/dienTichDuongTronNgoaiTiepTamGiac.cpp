/*
Tinh dien tich tam giac : 
    S = sqrt( p * ( p - a ) * ( p - b ) * ( p - c ) )
    p = ( a + b + c ) / 2
Tinh ban kinh duong tron : 
    R = ( a * b * c ) / ( 4 * S )
Tinh dien tich duong tron : 
    S = pi * R * R
*/
#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238

struct DienTich{
    double x, y;

    double distance( DienTich p ){
        return sqrt( pow( x - p.x, 2) + pow( y - p.y, 2 ) );
    } 

    void nhap(){
        cin >> x >> y;
    }
};

void in( DienTich a, DienTich b, DienTich c ){
    double aa = a.distance( b ), bb = a.distance( c ), cc = b.distance( c );
    if( aa + bb <= cc || aa + cc <= bb || bb + cc <= aa )
        cout << "INVALID" << endl;
    else{
        double p = ( aa + bb + cc ) / 2;
        double s = sqrt( p * ( p - aa ) * ( p - bb ) * ( p - cc ) );
        double r = ( aa * bb * cc ) / ( 4 * s );
        cout << fixed << setprecision( 3 ) << PI * r * r << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        DienTich a, b, c;
        a.nhap();
        b.nhap();
        c.nhap();
        in( a, b, c );
    }
    system("pause");
    return 0;
}