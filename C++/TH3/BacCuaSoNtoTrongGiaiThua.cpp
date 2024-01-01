#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, p;
        cin >> n >> p;
        if( 1 <= n && n <= 10000 && 2 <= p && p <= 5000 ){
            int i, count = 0;
            for( i = p; i <= n; i *= p ){
                count += n / i;
            }
            cout << count << endl;
        }
    }
    system("pause");
    return 0;
}