#include <bits/stdc++.h>
using namespace std;

void mul( vector<int> &v, vector<int> copy ){
    vector<int> result( v.size() + copy.size(), 0 );

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

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long a;
        int n;
        cin >> a >> n;

        if( n == 0 )
            cout << "1" << endl;
        else if( a == 0 )
            cout << "0" << endl;
        else{
            vector<int> v;
            int temp = a;
            while( temp ){
                v.push_back( temp % 10 );
                temp /= 10;
            }

            vector<int> copy( v.begin(), v.end() );

            for( int i = 0; i < n - 1; i++ )
                mul( v, copy );

            while( !v.empty() && v[v.size() - 1] == 0 )
                v.pop_back();

            for( int i = v.size() - 1; i >= 0; i-- )
                cout << v[i];
            cout << endl;
        }
    }
    system("pause");
    return 0;
}