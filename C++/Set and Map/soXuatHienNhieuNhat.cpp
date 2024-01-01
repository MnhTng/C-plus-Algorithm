#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        if( n < 1 || n > 100000 )
            return 0;
        else{
            int i;
            map<long long, int> mp;
            for( i = 0; i < n; i++ ){
                long long x;
                cin >> x;
                mp[x]++;
            }
            int max = 0;
            long long kq;
            for( auto ite : mp ){
                if( ite.second > max ){
                    max = ite.second;
                    kq = ite.first;
                }
            }
            cout << kq << " " << max << endl;
        }
    }
    system("pause");
    return 0;
}