#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, r;
    cin >> l >> r;
    int i, j;
    for( i = l; i <= r; i++ ){
        int temp = i;
        for( j = 2; j <= sqrt( i ); j++ ){
            int count = 0;
            while( temp % j == 0 ){
                count++;
                temp /= j;
            }
            if( count >= 2 ){
                cout << i << " ";
                break;
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}