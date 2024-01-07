#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;

        vector<long long> v( n + 1, 0 );
        v[0] = 1;

        for( int i = 1; i <= n; i++ ){
            for( int j = 0; j < i; j++ )
                v[i] += v[j] * v[i - 1 - j];
        }

        cout << v[n] << endl;
    }
    system("pause");
    return 0;
}