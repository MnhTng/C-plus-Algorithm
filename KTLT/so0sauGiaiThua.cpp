#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        long long i, count = 0;
        for( i = 5; i <= n; i *= 5 ){
            count += n / i;
        }
        // dung cong thuc Legendre de tim so mu cua luy thua ( tim so lan xuat hien )
        cout << count << endl;
    }
    system("pause");
    return 0;
}

