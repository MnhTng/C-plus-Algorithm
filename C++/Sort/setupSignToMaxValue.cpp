#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        if( n > k ){
            int sum = 0;
            vector<int> v( n );
            for( int &x : v ){
                cin >> x;
                sum += x;
            }
            while( k-- ){
                int min = *min_element( v.begin(), v.end() );
                sum -= 2 * min;
                auto ite = find( v.begin(), v.end(), min );
                v.erase( ite );
            }
            cout << sum << endl;
        }
    }
    system("pause");
    return 0;
}