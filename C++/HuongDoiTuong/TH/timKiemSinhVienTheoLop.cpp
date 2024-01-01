#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string msv, hoten, lop, email;
    public:
        friend istream& operator >> ( istream &in, SinhVien &p );
        friend ostream& operator << ( ostream &out, SinhVien p );
        string getLop();
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

string SinhVien::getLop(){
    return this->lop;
}

int main(){
    int n;
    cin >> n;
    map<string, vector<SinhVien>> mp;
    for( int i = 0; i < n; i++ ){
        SinhVien a;
        cin >> a;
        mp[a.getLop()].push_back( a );
    }
    string q;
    cin >> q;   
    for( auto ite : mp[q] )
        cout << ite;
    system("pause");
    return 0;
}