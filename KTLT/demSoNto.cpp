#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void sang(){
    for( int i = 0; i <= 1000000; i++ )
        arr[i] = 1;

    arr[0] = arr[1] = 0;
    for( int i = 2; i <= 1000; i++ ){
        if( arr[i] ){
            for( int j = i * i; j <= 1000000; j += i )
                arr[j] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    sang();
    while( t-- ){
        int l, r;
        cin >> l >> r;

        int count = 0;
        for( int i = l; i <= r; i++ ){
            if( arr[i] )
                count++;
        } 

        cout << count << endl;
    }
    system("pause");
    return 0;
}