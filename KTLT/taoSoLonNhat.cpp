#include <bits/stdc++.h>
using namespace std;

int comp( string a, string b ){
    return a + b > b + a;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;

        vector<string> v;
        for( int i = 0; i < n; i++ ){
            string x;
            cin >> x;
            v.push_back( x );
        }

        sort( v.begin(), v.end(), comp );
        string kq = "";
        
        for( int i = 0; i < n; i++ )
            kq += v[i];
        
        cout << kq << endl;
    }
    system("pause");
    return 0;
} 