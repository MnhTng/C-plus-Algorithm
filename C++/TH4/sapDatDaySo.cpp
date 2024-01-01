#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        set<int> s;
        for( int x : arr ){
            cin >> x;
            s.insert( x );
        }

        for( int i = 0; i < n; i++ ){
            if( s.count( i ) )
                cout << i << " ";
            else
                cout << "-1 ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}