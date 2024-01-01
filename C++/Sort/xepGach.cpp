#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
        cin >> arr[i];
    sort( arr, arr + n, greater<int>() );
    int count = 1, doCung = arr[0];
    for( int i = 1; i < n; i++ ){
        if( doCung >= 1 )
            count++;
        else
            break;
        doCung = min( doCung - 1, arr[i] );
    }
    cout << count << endl;
    system("pause");
    return 0;
}