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
        for( int &x : arr ){
            cin >> x;
            s.insert( x );
        }
        int count = 0;
        int min = *s.begin(), max = *s.rbegin();
        for( int i = min + 1; i < max; i++ ){
            if( s.count( i ) == 0 )
                count++;
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
}