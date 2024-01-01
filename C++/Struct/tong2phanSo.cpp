#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long tu, mau;
};

void nhap( PhanSo &p ){
    cin >> p.tu >> p.mau;
}

PhanSo tong( PhanSo &p, PhanSo &q ){
    long long bcnn = lcm( p.mau, q.mau );
    p.tu *= bcnn / p.mau;
    q.tu *= bcnn / q.mau;
    p.tu += q.tu;
    p.mau = bcnn;

    long long ucln = gcd( p.tu, q.tu );
    p.tu /= ucln;
    p.mau /= ucln; 
    return p;
}

void in( PhanSo p ){
    cout << p.tu << "/" << p.mau << endl;
}

int main(){
    PhanSo p, q;
    nhap( p );
    nhap( q );
    PhanSo t = tong( p, q );
    in( t );
    system("pause");
    return 0;
}