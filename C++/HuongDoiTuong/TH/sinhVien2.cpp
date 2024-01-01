#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string msv = "B21DCVT451";
        string hoten, lop, ngaysinh;
        float gpa;
    public:
        SinhVien();
        friend istream& operator >> ( istream &in, SinhVien &p );
        friend ostream& operator << ( ostream &out, SinhVien p );
};

SinhVien::SinhVien(){
    hoten = lop = ngaysinh = "";
    gpa = 0;
}

istream& operator >> ( istream &in, SinhVien &p ){
    getline( in, p.hoten );
    in >> p.lop >> p.ngaysinh;
    in >> p.gpa;
    return in;
} 

ostream& operator << ( ostream &out, SinhVien p ){
    if( p.ngaysinh[1] == '/' )
        p.ngaysinh = "0" + p.ngaysinh;
    if( p.ngaysinh[4] == '/' )
        p.ngaysinh.insert( 3, "0" );

    out << p.msv << " " << p.hoten << " " << p.lop << " " << p.ngaysinh << " " << fixed << setprecision( 2 )<< p.gpa << endl;
    return out;
} 

#define a() a

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    system("pause");
    return 0;
}