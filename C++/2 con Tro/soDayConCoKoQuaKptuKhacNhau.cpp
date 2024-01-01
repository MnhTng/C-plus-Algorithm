#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int a[n];
        for( int &x : a )
            cin >> x;

        int b[100001] = { 0 };
        int count = 0, result = 0;
        int l = 0, r = 0;
        while( r < n && count <= k ){
            b[a[r]]++;
            if( b[a[r]] == 1 )
                count++;
            while( count > k ){
                if( b[a[l]] == 1 )
                    count--;
                b[a[l]]--;
                l++;
            }
            result += r - l + 1;
            r++;
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}