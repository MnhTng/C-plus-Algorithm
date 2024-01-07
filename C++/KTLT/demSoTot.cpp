#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;

        long long odd = n / 2;
        long long even = n - n / 2;

        long long num_odd, num_even;
        num_odd = n / 2 == 0 ? 1 : 4;
        num_even = n - n / 2 == 0 ? 1 : 5;

        for( int i = 1; i < odd; i++ ){
            num_odd *= 4;
            num_odd %= mod;
        }
        for( int i = 1; i < even; i++ ){
            num_even *= 5;
            num_even %= mod;
        }

        long long kq = ( num_odd * num_even ) % mod;

        cout << kq << endl;
    }
    system("pause");
    return 0;
}