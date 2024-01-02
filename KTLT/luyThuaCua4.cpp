#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;

        while( n % 4 == 0 )
            n /= 4;
        
        cout << ( n == 1 ) << endl;
    }
    system("pause");
    return 0;
}