#include <bits/stdc++.h>
using namespace std;

void mul( vector<int> &v, int x ){
    int carry = 0;

    for( int i = 0; i < v.size(); i++ ){
        int temp = v[i] * x + carry;
        v[i] = temp % 10 ;
        carry = temp / 10;
    }
    while( carry ){
        v.push_back( carry % 10 );
        carry /= 10;
    }
}

void factorial( int n ){
    vector<int> v;
    v.push_back( 1 );

    for( int i = 2; i <= n; i++ )
        mul( v, i );

    for( int i = v.size() - 1; i >= 0; i-- )
        cout << v[i];
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        
        factorial( n );
    }
    system("pause");
    return 0;
}