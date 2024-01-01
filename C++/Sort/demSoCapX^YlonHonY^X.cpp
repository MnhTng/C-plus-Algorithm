/*
                    x^y > y^x  <=>  x < y

Luu y mot so truong hop ngoai le :
    -> Neu y = 1 && x > y  ==>  x^y > y^x
    -> Neu x >= 1 && y = 0 ==> x^y > y^x
    -> Loai tru x = 0
    -> Loai tru cap so ( 2, 4 ) vi 2^4 == 4^2
    -> Neu la cap ( 2, 3 ) thi nen xem xet de lua chon vi 2^3 < 3^2
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        int a[m], b[n];
        for( int &x : a )
            cin >> x;
        for( int &x : b )
            cin >> x;
        sort( a, a + m );
        sort( b, b + n );
        int count = 0, checknum1 = 0, checknum0 = 0, checknum2 = 0;
        for( int x : b ){
            if( x == 1 )
                checknum1++;
            if( x == 0 )
                checknum0++;
            if( x == 2 )
                checknum2++;
        }
        while( checknum1-- ){
            for( int x : a ){
                if( x > 1 )
                    count++;
            }
        }
        // Voi b[i] = 1 thi lay tat ca so thuoc a lon hon 1 
        while( checknum0-- ){
            for( int x : a ){
                if( x > 0 )
                    count++;
            }
        }
        // Lay nhung so cua a lon hon 0 ( bao gom ca a[i] = 1 va lon hon 1 )
        for( int x : a ){
            auto ite = upper_bound( b, b + n, x );
            if( x == 2 ){
                for( int i = ite - b; i < n; i++ ){
                    if( b[i] != 3 && b[i] != 4 )
                        count++;
                }
            }
            else if( x == 3 )
                count += checknum2;
            else if( x != 0 && x != 1 )
                count += b + n - ite;
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
}