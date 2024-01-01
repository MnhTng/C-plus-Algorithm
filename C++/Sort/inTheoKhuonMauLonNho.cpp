#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        vector<int> v( n );
        for( int i = 0; i < n; i++ )
            cin >> v[i];
        sort( v.begin(), v.end(), greater<int>() );
        bool rev = true;
        while( v.size() > 0 ){
            if( rev ){
                cout << v[0] << " ";
                v.erase( v.begin() );
            }
            else{
                cout << v[v.size() - 1] << " ";
                v.erase( v.end() - 1 );
            }
            rev = !rev;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}