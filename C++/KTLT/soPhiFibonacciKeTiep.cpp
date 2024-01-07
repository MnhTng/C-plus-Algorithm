#include <bits/stdc++.h>
using namespace std;

int fibo[50];

void fibonacci(){
    fibo[0] = 0, fibo[1] = 1;
    for( int i = 2; i < 50; i++ )
        fibo[i] = fibo[i - 2] + fibo[i - 1];
}

int main(){
    int t;
    cin >> t;
    fibonacci();
    while( t-- ){
        long n;
        cin >> n;

        long long result = n + 1;
        while( 1 ){
            auto ite = find( fibo, fibo + 50, result );
            if( ite == fibo + 50 )
                break;
            else
                result += 1;
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}