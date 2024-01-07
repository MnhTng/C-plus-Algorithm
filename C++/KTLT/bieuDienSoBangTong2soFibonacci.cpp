#include <bits/stdc++.h>
using namespace std;

int fibo[32];

void fibonacci(){
    fibo[0] = 0, fibo[1] = 1;
    for( int i = 2; i < 32; i++ )
        fibo[i] = fibo[i - 2] + fibo[i - 1];
}

int main(){
    int t;
    cin >> t;
    fibonacci();
    while( t-- ){
        int n;
        cin >> n;

        int check = 1;
        for( int i = 0; i < 31; i++ ){
            for( int j = i + 1; j < 32; j++ ){
                if( fibo[i] + fibo[j] == n ){
                    check = 0;
                    cout << fibo[i] << " " << fibo[j] << endl;
                    break;
                }
            }

            if( !check )
                break;
        }

        if( check )
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
}