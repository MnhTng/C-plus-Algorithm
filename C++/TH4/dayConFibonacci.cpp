#include <bits/stdc++.h>
using namespace std;

int fibo[1001] =  { 0 };

void fibonacci(){
    int arr[30];
    arr[0] = 0, arr[1] = 1;
    for( int i = 2; i < 30; i++ )
        arr[i] = arr[i - 1] + arr[i - 2];

    for( int  i = 0; arr[i] <= 1000; i++ )
        fibo[arr[i]] = 1;
}

int main(){
    int t;
    cin >> t;
    fibonacci();
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int x : arr ){
            cin >> x;
            if( fibo[x] )
                cout << x << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}