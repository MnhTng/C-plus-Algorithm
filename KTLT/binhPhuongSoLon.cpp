#include <bits/stdc++.h>
using namespace std;

vector<int> multiple( vector<int> v, int n ){
    vector<int> result( 2 * n, 0 );
    
    for( int i = n - 1; i >= 0; i-- ){
        for( int j = n - 1; j >= 0; j-- ){
            int mul = v[i] * v[j];
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }
    while( !result.empty() && result[0] == 0 )
        result.erase( result.begin() );
    return result;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        vector<int> v( n, 1 );
        vector<int> kq = multiple( v, n );
        for( int x : kq )
            cout << x;
        cout << endl;
    }
    system("pause");
    return 0;
}