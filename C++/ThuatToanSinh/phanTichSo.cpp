#include <bits/stdc++.h>
using namespace std;

void sinh( int *arr, int &count, int &check ){
    int i = count;
    int cnt = 0;
    while( i >= 1 && arr[i] == 1 ){
        i--;
        cnt++;
    }
    if( i == 0 )
        check = 0;
    else{
        arr[i]--;
        int temp = cnt + 1;
        count = i;
        int q = temp / arr[i];
        int r = temp % arr[i];
        if( q ){
            for( int j = 1; j <= q; j++ ){
                count++;
                arr[count] = arr[i];
            }
        }
        if( r ){
            count++;
            arr[count] = r;
        }
    }
} 

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        arr[1] = n;
        int count = 1;
        int check = 1;
        while( check ){
            for( int i = 1; i <= count; i++ )
                cout << arr[i] << " ";
            cout << endl;
            sinh( arr, count, check );
        }
    }
    system("pause");
    return 0;
}