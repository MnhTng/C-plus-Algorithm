#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string msv, hoten, lop, email;
    public:
        friend istream& operator >> ( istream &in, SinhVien &p );
        friend ostream& operator << ( ostream &out, SinhVien p );
        friend bool operator < ( SinhVien a, SinhVien b );
};

istream& operator >> ( istream &in, SinhVien &p ){
    in >> p.msv;
    in.ignore();
    getline( in, p.hoten );
    in >> p.lop >> p.email;
    in.ignore();
    return in;
}

ostream& operator << ( ostream &out, SinhVien p ){
    out << p.msv << " " << p.hoten << " " << p.lop << " " << p.email << endl;
    return out;
}

bool operator < ( SinhVien a, SinhVien b ){
    return a.lop != b.lop ? a.lop < b.lop : a.msv < b.msv;
}

int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    for( int i = 0; i < n; i++ )
        cin >> ds[i];
    sort( ds, ds + n );
    for( int i = 0; i < n; i++ )
        cout << ds[i] << endl;
    system("pause");
    return 0;
}