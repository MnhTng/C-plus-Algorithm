#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        double x;
        cin >> n >> x;
        if( 1 <= n && n <= 20 ){
            long double kq = 0;
            int i, denominator = 0;
            for( i = 1; i <= n; i++ ){
                denominator += i;
                kq += ( 1.0 * ( pow( x, i ) ) ) / denominator;
            }
            cout << fixed << setprecision( 3 ) << kq << endl;
        }
    }
    system("pause");
    return 0;
}