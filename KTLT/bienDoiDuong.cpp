#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;

        int arr[n], am = 0, duong = 0, check = 1;

        for( int i = 0; i < n; i++ ){
            cin >> arr[i];
            if( arr[i] > 0 )
                duong++;
            else if( arr[i] < 0 )
                am++;
            else
                check = 0;
        }

        if( check )
            cout << min( am, duong ) << endl;
        else
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
}
