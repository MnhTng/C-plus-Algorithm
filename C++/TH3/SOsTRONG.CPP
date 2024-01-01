#include <bits/stdc++.h>
using namespace std;

int arr[10];

void factorial(){
    int kq = 1;
    arr[0] = arr[1] = 1;
    for( int i = 2; i < 10; i++ ){
        kq *= i;
        arr[i] = kq;
    }
}

int main(){
    int t;
    cin >> t;
    factorial();
    while( t-- ){
        long long l, r;
        cin >> l >> r;
        int cond = 0;
        for( long long i = l; i <= r; i++ ){
            long long temp = i, sum = 0;
            while( temp ){
                int j = temp % 10;
                sum += arr[j];
                temp /= 10;
            }
            if( sum == i ){
                cout << i << " ";
                cond = 1;
            }
        }
        if( !cond )
            cout << "0";
        cout << endl;
    }
    system("pause");
    return 0;
}