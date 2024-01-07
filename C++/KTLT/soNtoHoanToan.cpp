#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void sang(){
    memset( arr, 1, sizeof( arr ) );
    arr[0] = arr[1] = 0;
    for( int i = 2; i <= 1000; i++ ){
        if( arr[i] ){
            for( int j = i * i; j <= 1000000; j += i )
                arr[j] = 0;
        }
    }
}

int ktra( int n ){
    while( n ){
        int temp = n % 10;
        n /= 10;
        if( !arr[temp] )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    sang();
    while( t-- ){
        int n;
        cin >> n;
        int count = 0;
        for( int i = 2; i <= n; i++ ){
            if( arr[i] && ktra( i ) )
                count++;
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
}