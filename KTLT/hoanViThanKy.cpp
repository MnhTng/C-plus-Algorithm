#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        
        if( k == 0 ){
            for( int i = 1; i <= n; i++ )
                cout << i << " ";
            cout << endl;
        }
        else if( n % k == 0 && ( n / k ) % 2 == 0 ){
            int i = 1;
            int temp = k;

            while( i <= n ){
                while( i <= k + temp ){
                    if( i <= k )
                        cout << i + temp << " ";
                    else
                        cout << i - temp << " ";
                    i++;
                }
                k += temp * 2;
            }

            cout << endl;
        }
        else
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
}

