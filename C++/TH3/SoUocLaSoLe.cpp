// aka so chinh phuong

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        long can = sqrt( n );
        if( 1ll * can * can != n ) 
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
    system("pause");
    return 0;
}