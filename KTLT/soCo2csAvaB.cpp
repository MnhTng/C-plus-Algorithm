#include <bits/stdc++.h>
using namespace std;

void result( int *arr, int freqA, int freqB, int size, int f_index, long long num, long long n, int &check ){
    if( f_index == size ){
        if( num >= n && freqA == freqB ){
            check = 0;
            cout << num << endl;
        }
    }
    else if( check ){
        for( int i = 0; i < 2; i++ ){
            if( i )
                result( arr, freqA, freqB + 1, size, f_index + 1, num * 10 + arr[i], n, check );
            else
                result( arr, freqA + 1, freqB, size, f_index + 1, num * 10 + arr[i], n, check );
        }
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        int a, b;
        cin >> n >> a >> b;

        string s = to_string( n );
        int size = s.size();
        if( size % 2 == 1 )
            size += 1;

        int arr[2] = { min( a, b ), max( a, b ) };
        int freqA = 0;
        int freqB = min( a, b ) == 0 ? 1 : 0;

        int check = 1;
        int f_index = min( a, b ) == 0 ? 1 : 0;
        long long num = min( a, b ) == 0 ? max( a, b ) : 0;

        result( arr, freqA, freqB, size, f_index, num, n, check );

        if( check ){
            if( s.size() % 2 == 0 )
                size += 2;
            
            if( min( a, b ) == 0 ){
                for( int i = 2; i <= size; i++ ){
                    if( i <= size / 2 + 1 )
                        num = num * 10 + min( a, b );
                    else
                        num = num * 10 + max( a, b );
                }
            }
            else{
                for( int i = 1; i <= size; i++ ){
                    if( i <= size / 2 )
                        num = num * 10 + min( a, b );
                    else
                        num = num * 10 + max( a, b );
                }
            }

            cout << num << endl;
        }
    }
    system("pause");
    return 0;
}