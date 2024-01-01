#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k, b;
        cin >> n >> k >> b;
        int arr[n];
        for( int &x : arr )
            cin >> x;

        multiset<int> s;
        int check = 1;

        for( int i = 0; i < k; i++ ){
            auto ite = s.lower_bound( arr[i] - b );
            if( ite != s.end() && *ite <= arr[i] + b ){
                cout << "YES" << endl;
                check = 0;
                break;
            }
            s.insert( arr[i] );
        }

        if( check ){
            for( int i = k; i < n; i++ ){
                s.erase( s.find( arr[i - k] ) );
                auto ite = s.lower_bound( arr[i] - b );
                if( ite != s.end() && *ite <= arr[i] + b ){
                    cout << "YES" << endl;
                    check = 0;
                    break;
                }
                s.insert( arr[i] );
            }
        }

        if( check )
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}