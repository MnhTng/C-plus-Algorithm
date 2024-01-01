#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;  

    long a[n], b[m];
    map<long, int> mp;

    for( int i = 1; i <= n; i++ ){
        cin >> a[i];
        if( mp[a[i]] == 0 )
            mp[a[i]] = i;
    }

    for( int i = 1; i <= m; i++ ){
        cin >> b[i];
        cout << mp[b[i]] << " ";
        mp[b[i]]++;
    }
    
    cout << endl;
    system("pause");
    return 0;
}


