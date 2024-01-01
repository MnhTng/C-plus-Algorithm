#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
    string HoTen;
    string NgaySinh;
    double diem1, diem2, diem3;
};

void nhap( ThiSinh &p ){
    getline( cin, p.HoTen );
    getline( cin, p.NgaySinh );
    cin >> p.diem1 >> p.diem2 >> p.diem3;
}

void in( ThiSinh p ){
    cout << p.HoTen << " " << p.NgaySinh << " " << fixed << setprecision( 1 ) << p.diem1 + p.diem2 + p.diem3 << endl;
}

int main(){
    struct ThiSinh A;
    nhap( A );
    in( A );
    system("pause");
    return 0;
}