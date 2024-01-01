#include <bits/stdc++.h>
using namespace std;

struct Point{
    double x, y;
};

void nhap( Point &p ){
    cin >> p.x >> p.y;
}

double distance( Point &p, Point &q ){
    return sqrt( pow( p.x - q.x, 2 ) + pow( p.y - q.y, 2 ) );
}

int main(){
    struct Point A, B;
    int t;
    cin >> t;
    while( t-- ){
        nhap( A );
        nhap( B );
        cout << fixed << setprecision( 4 ) << distance( A, B ) << endl;
    }
    system("pause");
    return 0;
}