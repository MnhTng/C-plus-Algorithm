#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        int cond = 1, ite;
        for( int &x : arr ){
            cin >> x;
            mp[x]++;
            if( mp[x] == 2 && cond ){
                ite = x;
                cond = 0;
            }
        }
        if( cond )
            cout << "-1" << endl;
        else
            cout << ite << endl;
    }
    system("pause");
    return 0;
}

