#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string msv = "B21DCVT451";
        string hoten, lop, ngaysinh;
        float gpa;
    public:
        SinhVien();
        friend void nhap( SinhVien& );
        friend void in( SinhVien );
};

SinhVien::SinhVien(){
    this->hoten = "";
    this->lop = "";
    this->ngaysinh = "";
    this->gpa = 0;
}

void nhap( SinhVien &a ){
    getline( cin, a.hoten );
    cin >> a.lop >> a.ngaysinh;
    cin >> a.gpa;
}

void in( SinhVien a ){
    if( a.ngaysinh[1] == '/' )
        a.ngaysinh = "0" + a.ngaysinh;
    if( a.ngaysinh[4] == '/' )
        a.ngaysinh.insert( 3, "0" );
    cout << a.msv << " " << a.hoten << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision( 2 ) << a.gpa << endl;
}

#define a() a

int main(){
    SinhVien a();
    nhap( a );
    in( a );
    system("pause");
    return 0;
}