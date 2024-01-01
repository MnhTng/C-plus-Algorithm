#include <bits/stdc++.h>
using namespace std;

class PhanSo{
    private:
        long long tu, mau;
    public:
        PhanSo( long long, long long );
        friend istream& operator >> ( istream &in, PhanSo &p );
        friend ostream& operator << ( ostream &out, PhanSo p );
        void rutgon();
};

PhanSo::PhanSo( long long tu, long long mau ){
    this->tu = tu;
    this->mau = mau;
}

istream& operator >> ( istream& in, PhanSo &p ){
    in >> p.tu >> p.mau;
    return in; 
}

ostream& operator << ( ostream &out, PhanSo p ){
    out << p.tu << "/" << p.mau << endl;
    return out;
}

void PhanSo::rutgon(){
    long long ucln = gcd( this->tu, this->mau );
    this->tu /= ucln;
    this->mau /= ucln;
}

int main(){
    PhanSo p( 1, 1 );
    cin >> p;
    p.rutgon();
    cout << p;
    system("pause");
    return 0;
}
