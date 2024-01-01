#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long n;
        cin >> n;

        int fibo[50];
        fibo[0] = 0, fibo[1] = 1;
        long long result = 0;

        for( int i = 2; i < 50; i++ ){
            fibo[i] = fibo[i - 2] + fibo[i - 1];

            if( fibo[i] > n )
                break;
            if( fibo[i] % 2 == 0 )
                result += fibo[i];
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}