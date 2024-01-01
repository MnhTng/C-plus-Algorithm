#include <bits/stdc++.h>
using namespace std;

void mul( vector<int> &v, vector<int> copy ){
    vector<int> result( copy.size() + v.size(), 0 );

    for( int i = 0; i < v.size(); i++ ){
        for( int j = 0; j < copy.size(); j++ ){
            int mul = v[i] * copy[j];
            int sum = mul + result[i + j];
            result[i + j] = sum % 10;
            result[i + j + 1] += sum / 10;
        }
    }

    v.clear();
    for( int i = 0; i < result.size(); i++ )
        v.push_back( result[i] );
}

void kq( long long n, int k, int m ){
    vector<int> v;

    long long temp = n;
    while( temp ){
        v.push_back( temp % 10 );
        temp /= 10;
    }

    vector<int> copy( v.begin(), v.end() );

    for( int i = 0; i < k - 1; i++ )
        mul( v, copy );

    while( !v.empty() && v[v.size() - 1] == 0 )
        v.pop_back();
    
    for( int i = 0; i < m; i++ )
        cout << v[v.size() - 1 - i];
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        int k, m;
        cin >> k >> m;
        kq( n, k, m );
    }
    system("pause");
    return 0;
}