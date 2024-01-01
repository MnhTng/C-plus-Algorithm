#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string mnv = "00001";
    string hoten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string mathue;
    string ngayhopdong;
};

void nhap( NhanVien &p ){
    getline( cin, p.hoten );
    getline( cin, p.gioitinh );
    getline( cin, p.ngaysinh );
    getline( cin, p.diachi );
    getline( cin, p.mathue );
    getline( cin, p.ngayhopdong );
}

void in( NhanVien &p ){
    if( p.ngaysinh[1] == '/' )
        p.ngaysinh = "0" + p.ngaysinh;
    if( p.ngaysinh[4] == '/' )
        p.ngaysinh.insert( 3, "0" );

    if( p.ngayhopdong[1] == '/' )
        p.ngayhopdong = "0" + p.ngayhopdong;
    if( p.ngayhopdong[4] == '/' )
        p.ngayhopdong.insert( 3, "0" );
    
    cout << p.mnv << " " << p.hoten << " " << p.gioitinh << " " << p.ngaysinh << " " << p.diachi << " " << p.mathue << " " << p.ngayhopdong << endl;
}

int main(){
    NhanVien a;
    nhap( a );
    in( a );
    system("pause");
    return 0;
}