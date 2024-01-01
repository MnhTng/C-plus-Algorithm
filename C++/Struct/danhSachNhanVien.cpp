#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    int mnv;
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

void inds( NhanVien *p, int n ){
    for( int i = 0; i < n; i++ ){
        if( p[i].ngaysinh[1] == '/' )
            p[i].ngaysinh = "0" + p[i].ngaysinh;
        if( p[i].ngaysinh[4] == '/' )
            p[i].ngaysinh.insert( 3, "0" );
        if( p[i].ngayhopdong[1] == '/' )
            p[i].ngayhopdong = "0" + p[i].ngayhopdong;
        if( p[i].ngayhopdong[4] == '/' )
            p[i].ngayhopdong.insert( 3, "0" );

        p[i].mnv = i + 1;
        cout << setw( 5 ) << setfill( '0' ) << p[i].mnv << " ";
        cout << p[i].hoten << " " << p[i].gioitinh << " " << p[i].ngaysinh << " " << p[i].diachi << " " << p[i].mathue << " " << p[i].ngayhopdong << endl; 
    }
}

int main(){
    struct NhanVien ds[50];
    int n, i;
    cin >> n;
    cin.ignore();
    for( i = 0; i < n; i++ )
        nhap( ds[i] );
    inds( ds, n );
    system("pause");
    return 0;
}