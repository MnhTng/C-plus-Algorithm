#include <bits/stdc++.h>
using namespace std;

int save[1000001];

int main(){
    int t;
    cin >> t;
    int index = 0;
    for( int i = 0; i < t; i++ ){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for( int &x : arr )
            cin >> x;
        sort( arr, arr + n );
        int count = 1;
        for( int i = 0; i < n - 1; i++ ){
            if( arr[i + 1] - arr[i] > k )
                count++;
        }
        save[index] = count;
        index++;
    }
    for( int i = 0; i < index; i++ )
        cout << "Case #" << i + 1 << ": " << save[i] << endl;
    system("pause");
    return 0;
}