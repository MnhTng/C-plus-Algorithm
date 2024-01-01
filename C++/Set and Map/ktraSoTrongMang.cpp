#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        if( n <1 || n > 1000 )
            return 0;
        else{
            int q, i;
            set<int> s;
            for( i = 0; i < n; i++ ){
                int x;
                cin >> x;
                s.insert( x );
            }
            cin >> q;
            int arr[q];
            for( i = 0; i < q; i++ ){
                cin >> arr[i];
            }
            i = 0;
            while( i < q ){
                // if( s.count( arr[i] ) )
                if( binary_search( s.begin(), s.end(), arr[i] ) )
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
                i++;
            }
        }
    }
    system("pause");
    return 0;
}