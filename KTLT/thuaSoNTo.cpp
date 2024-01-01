#include  <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        map<long long, int> mp;
        if( n % 2 == 0 ){
            int count = 0;
            while( n % 2 == 0 ){
                count++;
                n /= 2;
            }
            mp[2] = count;
        }
        for( long long i = 3; i <= sqrt( n ); i += 2 ){
            if( n % i == 0 ){
                int count = 0;
                while( n % i == 0 ){
                    count++;
                    n /= i;
                }
                mp[i] = count;
            }
        }
        if( n != 1 )
            mp[n] = 1;
        cout << mp.size() << endl;
        for( auto ite : mp )
            cout << ite.first << " " << ite.second << endl;
    }
    system("pause");
    return 0;
}