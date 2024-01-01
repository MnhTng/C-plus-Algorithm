#include <bits/stdc++.h>
using namespace std;

void mul( vector<int> &v, int n ){
    int carry = 0;

    for( long long unsigned i = 0; i < v.size(); i++ ){
        int temp = v[i] * n + carry;
        v[i] = temp % 10;
        carry = temp / 10;
    }

    while( carry ){
        v.push_back( carry % 10 );
        carry /= 10;
    }
}

void luy_thua( int n, int m, int k ){
    vector<int> v;
    v.push_back( 1 );

    if( n == 0 )
        cout << "0" << endl;
    else{
        for( int i = 0; i < m; i++ )
            mul( v, n );

        int size = v.size();
        for( int i = v.size() - 1; i >= size - k; i-- )
            cout << v[i];
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, m, k;
        cin >> n >> m >> k;

        luy_thua( n, m, k );
    }
    system("pause");
    return 0;
}