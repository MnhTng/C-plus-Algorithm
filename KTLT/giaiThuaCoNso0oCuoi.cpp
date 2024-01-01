#include <bits/stdc++.h>
using namespace std;

int dem5( long long n ){
    int count = 0;
    while( n % 5 == 0 ){
        count++;
        n /= 5;
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        long long all = n * 5;

        long long count = 0;
        for( long long i = 5; i <= all; i *= 5 )
            count += all / i;

        int surplus = count - n;
        while( 1 ){
            if( surplus > dem5( all ) ){
                surplus -= dem5( all );
                all -= 5;
            }
            else if( surplus < dem5( all ) ){
                break;
            }
            else{
                all -= 5;
                break;
            }
        }

        cout << all << endl;

        // int count = 0;
        // long long index = 0;
        // while( count < n ){
        //     long long temp = index + 5;
        //     while( temp >= 5 && temp % 5 == 0 ){
        //         temp /= 5;
        //         count++; 
        //     }
        //     index += 5;
        // }
        // cout << index << endl;
    }
    system("pause");
    return 0;
}