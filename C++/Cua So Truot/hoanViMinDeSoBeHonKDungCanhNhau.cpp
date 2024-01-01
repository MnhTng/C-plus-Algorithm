/*
    Dem so phan tu <= k  --> count
    Tim cac cua so co do dai = count
    Tim cua so nao co nhieu phan tu <= k nhat
    Lay hieu cua ( tong so phan tu <= k ) vs ( so phan tu <= k o buoc 3 )  --> kq
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for( int &x : arr )
            cin >> x;

        int count = 0;
        for( int i = 0; i <  n; i++ ){
            if( arr[i] <= k )
                count++;
        }

        int cnt = 0, save = 0;
        for( int i = 0; i < count; i++ ){
            if( arr[i] <= k )
                cnt++;
        }
        save = cnt;
        for( int i = count; i < n; i++ ){
            if( arr[i] <= k )
                cnt++;
            if( arr[i - count] <= k )
                cnt--;
            if( cnt > save )
                save = cnt;
        }

        cout << count - save << endl;
    }
    system("pause");
    return 0;
}