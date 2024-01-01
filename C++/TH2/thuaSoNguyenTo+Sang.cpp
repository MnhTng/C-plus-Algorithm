#include <bits/stdc++.h>
using namespace std;

int arr[100000];

void prime( int n ){
    int i, j;
    for( i = 0; i < 100000; i++ )
        arr[i] = 1;
    arr[0] = arr[1] = 1;
    for( i = 2; i < sqrt( 100000 ); i++ ){
        if( arr[i] ){
            for( j = i * i; j < 100000; j += i )
                arr[j] = 0;
            if( n % i == 0 ){
                int count = 0;
                while( n % i == 0 ){
                    n /= i;
                    count++;
                }
                cout << i << "(" << count << ") ";
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, count = 1;
        cin >> n;
        cout << "#TC" << count << ": ";
        count++;
        prime( n );
        cout << endl;
    }
    system("pause");
    return 0;
}