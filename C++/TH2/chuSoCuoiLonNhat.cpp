#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void prime(){
    int i, j;
    for( i = 0; i <= 1000000; i++ )
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    for( i = 2; i <= 1000; i++ ){
        if( arr[i] ){
            for( j = i * i; j <= 1000000; j += i )
                arr[j] = 0;
        }
    }
}

int finalDigit( int n ){
    if( n < 10 )
        return 1;
    else{
        int temp1 = n % 10;
        n /= 10;
        while( n ){
            int temp2 = n % 10;
            n /= 10;
            if( temp1 < temp2 )
                return 0;
        }
        return 1;
    }
}

int main(){
    int t;
    cin >> t;
    prime();
    while( t-- ){
        int n;
        cin >> n; 
        for( int i = 2; i < n; i++ ){
            if( arr[i] && finalDigit( i ) )
                cout << i << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}