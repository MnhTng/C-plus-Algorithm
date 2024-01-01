#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long x, y, m;
        cin >> x >> y >> m;

        long long sum = m / x;
        long long nguyen = sum / y;
        long long du = sum % y;
        long long temp = nguyen + du;
        sum += nguyen;

        while( temp >= y ){
            nguyen = temp / y;
            du = temp % y;
            temp = nguyen + du;
            sum += nguyen;
        }

        cout << sum << endl;
    }
    system("pause");
    return 0;
}