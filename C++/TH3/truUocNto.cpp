#include <bits/stdc++.h>
using namespace std;

int result( long long n ){
    if( n % 2 == 0 )
        return 1;
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            return 1;
    }
    return n - 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long x, y;
        cin >> x >> y;
        if( result( x - y ) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        /*
            Ta co the bo ham result di va lam nhu sau: 
                    if( x - y != 1 )    cout << "YES" << endl;
                    else    cout << "NO" << endl; 
        */
    }
    system("pause");
    return 0;
}