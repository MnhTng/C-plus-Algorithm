#include <bits/stdc++.h>
using namespace std;

struct Nguoi{
    string hoten;
    string ngaysinh;
};

int comp( Nguoi a, Nguoi b ){
    string s1 = a.ngaysinh, s2 = b.ngaysinh;
    int d1 = ( s1[0] - '0' ) * 10 + ( s1[1] - '0' );
    int d2 = ( s2[0] - '0' ) * 10 + ( s2[1] - '0' );
    int m1 = ( s1[3] - '0' ) * 10 + ( s1[3] - '0' );
    int m2 = ( s2[3] - '0' ) * 10 + ( s2[3] - '0' );
    int y1 = stoi( s1.substr( 6, 4 ) );
    int y2 = stoi( s2.substr( 6, 4 ) );

    if( y1 != y2 )
        return y1 < y2;
    if( m1 != m2 )
        return m1 < m2;
    return d1 < d2;
}

int main(){
    int n;
    cin >> n;
    Nguoi ds[n];
    for( int i = 0; i < n; i++ ){
        cin >> ds[i].hoten;
        cin >> ds[i].ngaysinh;
    }
    sort( ds, ds + n, comp );
    cout << ds[n - 1].hoten << endl << ds[0].hoten << endl;
    system("pause");
    return 0;
}