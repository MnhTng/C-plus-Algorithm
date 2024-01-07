#include <bits/stdc++.h>
using namespace std;

void sum( string a, string b ){
    int carry = 0;
    reverse( a.begin(), a.end() );
    reverse( b.begin(), b.end() );
    if( a.size() < b.size() )
        a = a + string( b.size() - a.size(), '0' );
    else
        b = b + string( a.size() - b.size(), '0' );

    vector<int> v;
    for( int i = 0; i < a.size(); i++ ){
        int num1 = (int)a[i] - 48;
        int num2 = (int)b[i] - 48;
        int sum = num1 + num2 + carry;
        if( sum > 9 ){
            v.push_back( sum % 10 );
            carry = sum / 10;
        }
        else{
            v.push_back( sum );
            carry = 0;
        }
    }
    if( carry )
        v.push_back( carry );

    for( int i = v.size() - 1; i >= 0; i-- )
        cout << v[i];
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string a, b;
        cin >> a >> b;
        sum( a, b );
    }
    system("pause");
    return 0;
}