#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for( int &x : arr )
            cin >> x;

        set<int> s;
        int check = 1;
        for( int i = 0; i < k; i++ )
            s.insert( arr[i] );

        if( s.size() < k )
            cout << "YES" << endl;
        else{
            for( int  i = k; i < n; i++ ){
                s.erase( s.begin() );
                if( s.count( arr[i] ) ){
                    cout << "YES" << endl;
                    check = 0;
                    break;
                }
                else
                    s.insert( arr[i] );
            }
            if( check )
                cout << "NO" << endl;
        }
    }
    system("pause");
    return 0;
}