#include <bits/stdc++.h>
using namespace std;

void mul_and_sub( string &so_chia, string b, string &thuong ){
    string so_bi_chia = b;
    string chia = so_chia;

    while( so_bi_chia.size() < chia.size() )
        so_bi_chia = "0" + so_bi_chia;

    while( chia.size() < so_bi_chia.size() )
        chia = "0" + chia;

    int count = 1, check = 1;
    string temp;

    while( 1 ){
        if( chia < so_bi_chia )
            break;

        temp = "";
        int carry = 0;

        for( int i = so_bi_chia.size() - 1; i >= 0; i-- ){
            int c = ( chia[i] - '0' ) - ( so_bi_chia[i] - '0' ) - carry;

            if( c < 0 ){
                temp = to_string( c + 10 ) + temp;
                carry = 1;
            }
            else{
                temp = to_string( c ) + temp;
                carry = 0; 
            }
        }

        check = 0;
        if( temp < so_bi_chia )
            break;
        else{
            chia = temp;
            count++;
        }
    }

    if( !check )
        chia = temp;

    int i = 0;
    while( !chia.empty() && chia[i] == '0' )
        i++;
    
    so_chia = chia.substr( i );

    if( check )
        thuong += "0";
    else
        thuong += to_string( count );
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string a, b;
        cin >> a >> b;

        int m = 0, n = 0;
        while( a.size() - m > 1 && a[m] == '0' )
            m++;
        while( b.size() - n > 1 && b[n] == '0' )
            n++;

        a = a.substr( m );
        b = b.substr( n );

        if( a.size() < b.size() || ( a.size() == b.size() && a < b ) )
            cout << "0 " << a << endl;
        else if( a.size() == b.size() && a == b )
            cout << "1 0" << endl;
        else{
            string thuong = "";
            string du = "";
            // duyet vong lap ca khi i >= a.size()
            int check = 1;

            long long unsigned i = b.size();
            string so_chia = a.substr( 0, i );
            while( check || i < a.size() ){
                if( i < a.size() && ( so_chia.size() < b.size() || ( so_chia.size() == b.size() && so_chia < b ) || so_chia.empty() ) ){
                    so_chia += a[i];
                    i++;
                }
                check = 0;
                mul_and_sub( so_chia, b, thuong );
            }

            if( so_chia.empty() )
                du += "0";
            else
                du += so_chia;

            cout << thuong << " " << du << endl;
        }
    }
    system("pause");
    return 0;
}