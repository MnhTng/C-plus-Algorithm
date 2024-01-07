#include <bits/stdc++.h>
using namespace std;

long long factorial( int n ){
    long long fac = 1;
    for( int i = 2; i <= n; i++ )
        fac *= i;
    return fac;
} 

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        int arr[n];
        for( int i = 0; i < n; i++ ){
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int so_be = *min_element( arr, arr + n );
        int check = 0;
        int count = 1;
        if( mp[so_be] == k )
            cout << count << endl;
        else if( mp[so_be] < k ){
            int temp;
            for( auto ite : mp ){
                check += ite.second;
                temp = ite.second;
                if( check == k ){
                    cout << count << endl;
                    break;
                }
                else if( check > k ){
                    cout << factorial( temp ) / ( factorial( k - ( check - temp ) ) * factorial( check - k ) ) << endl;
                    break;
                }
            }
        }
        else{
            cout << factorial( mp[so_be] ) / ( factorial( k ) * factorial( mp[so_be] - k ) ) << endl;
        }
    }
    system("pause");
    return 0;
}