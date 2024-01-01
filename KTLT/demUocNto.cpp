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
        long long n;
        cin >> n;
        int count = 0;
        for( long i = 2; i <= sqrt( n ); i++ ){
            if( arr[i] && n % i == 0 ){
                count++;
                while( n % i == 0 )
                    n /= i;
            }
        }
        if( n != 1 && n != 0 )
            count++;
        cout << count << endl;
    }
    system("pause");
    return 0;
}
