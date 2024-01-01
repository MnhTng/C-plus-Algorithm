#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int save;
        for( int i = 2; i <= sqrt( n ); i++ ){
            if( n % i == 0 ){
                save = i;
                while( n % i == 0 )
                    n /= i;
            }
        }
        if( n != 1 )
            cout << n << endl;
        else    
            cout << save << endl;
    }
    system("pause");
    return 0;
}