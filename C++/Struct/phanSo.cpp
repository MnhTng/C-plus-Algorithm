#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;
};

void nhap( PhanSo &p ){
    cin >> p.tu >> p.mau;
}

void rutgon( PhanSo &p ){
    long long ucln = gcd( p.tu, p.mau );
    p.tu /= ucln;
    p.mau /= ucln;
}

void in( PhanSo p ){
    cout << p.tu << "/" << p.mau << endl;
}

int main(){
    PhanSo p;
    nhap( p );
    rutgon( p );
    in( p );
    system("pause");
    return 0;
}