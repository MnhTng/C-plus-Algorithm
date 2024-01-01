#include <bits/stdc++.h>
using namespace std;

class PhanSo{
    private:
        long tu, mau;
    public:
        PhanSo( long, long );
        friend istream& operator >> ( istream &in, PhanSo &p );
        friend ostream& operator << ( ostream &out, PhanSo p );
        friend PhanSo operator + ( PhanSo p, PhanSo q );
        void rutgon( PhanSo );
};

void PhanSo::rutgon( PhanSo p ){
    
}

PhanSo operator + ( PhanSo p, PhanSo q ){
    long long bcnn = lcm( p.mau, q.mau );
    p.tu *= bcnn / p.mau;
    q.tu *= bcnn / q.mau;
    p.tu += q.tu;
    p.mau = bcnn;
    long long ucln = gcd( p.tu, p.mau );
    p.tu /= ucln;
    p.mau /= ucln;
    return p;
}

PhanSo::PhanSo( long tu, long mau ){
    this->tu = tu;
    this->mau = mau;
}

istream& operator >> ( istream &in, PhanSo &p ){
    in >> p.tu >> p.mau;
    return in;
}

ostream& operator << ( ostream &out, PhanSo s ){
    out << s.tu << "/" << s.mau << endl;
    return out;
}

int main(){
    PhanSo p( 1, 1 ), q( 1, 1 );
    cin >> p >> q;
    cout << p + q;
    system("pause");
    return 0;
}