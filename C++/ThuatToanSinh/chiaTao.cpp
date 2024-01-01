// ap dung sinh nhi phan de tim cac cach chia tao
#include <bits/stdc++.h>
using namespace std;

int sinh( int *xau, int *arr, int n, int &check ){
    int i = n;
    while( i >= 1 && xau[i] == 1 ){
        xau[i] = 0;
        i--;
    }
    if( i == 0 )
        check = 0;
    else
        xau[i]++;
    
    int sum1 = 0, sum0 = 0;
    for( int i = 1; i <= n; i++ ){
        if( xau[i] == 0 )
            sum0 += arr[i];
        else
            sum1 += arr[i];
    }
    int result = abs( sum1 - sum0 );
    return result;
}

int main(){
    int t;
    cin >> t;           
    while( t-- ){
        int n;
        cin >> n;
        int arr[n], xau[n];
        for( int i = 1; i <= n; i++ ){
            cin >> arr[i];
            xau[i] = 0;
        }

        int check = 1;
        int min = accumulate( arr + 1, arr + 1 + n, 0 );
        while( check ){
            int temp = sinh( xau, arr, n, check );
            if( min > temp )
                min = temp;
        }
        cout << min << endl;
    }
    system("pause");
    return 0;
}