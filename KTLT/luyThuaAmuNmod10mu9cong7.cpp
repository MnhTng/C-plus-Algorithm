#include <bits/stdc++.h>
using namespace std;

void sub( string &s, string num ){
    int carry = 0;

    while( 1 ){
        if( s < num )
            break;

        for( int i = s.size() - 1; i >= 0; i-- ){
            int temp = ( s[i] - '0' ) - ( num[i] - '0' ) - carry;

            if( temp < 0 ){
                s[i] = static_cast<char>( temp + 10 + 48 );
                carry = 1;
            }
            else{
                s[i] = static_cast<char>( temp + 48 );
                carry = 0;
            }
        }
    }

    if( num[num.size() - 1] != '7' && s < num ){
        num = num.substr( 0, num.size() - 1 );
        num = "0" + num;
    }

    if( num[num.size() - 1] == '7' && s < num ){
        int i = 0;
        while( !s.empty() && s[i] == '0' )
            i++;
        s = s.substr( i );
    }
    else
        sub( s, num );
}

void mul_and_sub( string &v, string copy, string num, string s ){
    vector<int> result( v.size() + copy.size(), 0 );

    for( int i = v.size() - 1; i >= 0; i-- ){
        for( int j = copy.size() - 1; j >= 0; j-- ){
            int mul = ( v[i] - '0' ) * ( copy[j] - '0' );
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    while( !result.empty() && result[0] == 0 )
        result.erase( result.begin() );

    s = "";
    for( long long unsigned i = 0; i < result.size(); i++ )
        s += static_cast<char>( result[i] + 48 );
    
    if( s.size() >= num.size() ){
        while( s.size() > num.size() )
            num += "0";
        
        sub( s, num );
        v.clear();
        if( s.empty() )
            v = "0";
        else
            v = s;
    }
    else{
        v.clear();
        for( long long unsigned i = 0; i < result.size(); i++ )
            v += static_cast<char>( result[i] + 48 );
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long a, n;
        cin >> a >> n;

        if( n == 0 )
            cout << "1" << endl;
        else if( a == 0 )
            cout << "0" << endl;
        else{
            string v = "";
            long temp = a;
            string num = "1000000007";
            string s = "";

            while( temp ){
                v = to_string( temp % 10 ) + v;
                temp /= 10;
            }

            string copy = v;
            for( int i = 0; i < n - 1; i++ )
                mul_and_sub( v, copy, num, s );

            cout << v << endl;
        }
    }
    system("pause");
    return 0;
}