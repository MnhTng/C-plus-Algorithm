#include <bits/stdc++.h>
using namespace std;

long de_quy( int size, long n ){
    if( size == 1 )
        return n;
    return n + de_quy( size - 1, n );
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long n;
        cin >> n;
        long temp = n;
        string s = to_string( temp );
        string result;

        if( n == 0 )
            cout << "0" << endl;
        else if( s.size() == 1 )
            cout << "1" << endl;
        else{
            long kq = de_quy( s.size() - 1, 1 );
            kq = kq * 10 + ( 10 - kq );

            for( int i = 3; i <= s.size(); i++ )
                kq *= 10;

            long end = 9;
            for( int i = 0; i < s.size() - 1; i++ )
                end = end * 10 + 9;

            for( long i = end; i > n; i-- )
                result += to_string( i );
            
            for( char x : result ){
                if( x == '1' )
                    kq--;
            }
            
            cout << kq << endl;
        }
    }
    system("pause");
    return 0;
}