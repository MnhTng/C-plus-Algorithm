#include <bits/stdc++.h>
using namespace std;

int x;

int comp( int a, int b ){
    return abs( a - x ) < abs( b - x );
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n >> x;
        int arr[n];
        for( int &x : arr )
            cin >> x;
        stable_sort( arr, arr + n, comp );
        for( int x : arr )
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}