#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string MSV = "B21DCVT451";
    string hoten;
    string lop;
    string ngaysinh;
    double gpa;
};

void nhap( SinhVien &p ){
    getline( cin, p.hoten );
    getline( cin, p.lop );
    getline( cin, p.ngaysinh );
    cin >> p.gpa;
}

void in( SinhVien &p ){
    if( p.ngaysinh[1] == '/' )
        p.ngaysinh = "0" + p.ngaysinh;
    if( p.ngaysinh[4] == '/' )
        p.ngaysinh.insert( 3, "0" );
    cout << p.MSV << " " << p.hoten << " " << p.lop << " " << p.ngaysinh << " " << fixed << setprecision( 2 ) << p.gpa << endl;
}

int main(){
    SinhVien a;
    nhap( a );
    in( a );
    system("pause");
    return 0;
}