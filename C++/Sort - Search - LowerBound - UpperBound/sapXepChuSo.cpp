#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        string s; 
        for( int &x : arr ){
            cin >> x;
            string temp = to_string( x ); 
            s.insert( s.end() - s.begin(), temp );
        }
        set<char> digit;
        for( char x : s )
            digit.insert( x );
        for( auto x : digit )
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}