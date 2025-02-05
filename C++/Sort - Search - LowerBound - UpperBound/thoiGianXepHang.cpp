#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    multimap<int, int> mp;
    for( int  i = 0; i < n; i++ ){
        int t, d;
        cin >> t >> d;
        mp.insert( make_pair( t, d ) );
    }
    int time = 0;
    for( auto ite : mp ){
        if( time < ite.first )
            time += ite.first - time + ite.second;
        else
            time += ite.second;
    }
    cout << time << endl;
    system("pause");
    return 0;
}