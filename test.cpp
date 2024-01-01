#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;
    mp[4] = 3;
    mp[2] = 9;
    mp[6] = 1;
    mp[0] = 5;
    for( auto ite : mp )
        cout << ite.first << " " << ite.second << endl;
    system("pause");
    return 0;
}