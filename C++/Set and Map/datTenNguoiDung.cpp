#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    string str_name[n];
    for( i = 0; i < n; i++ ){
        cin >> str_name[i];
    }
    map<string, int> mp;
    for( string x : str_name ){
        mp[x] = 1;
    }
    i = 0;
    while( i < n ){
        if( mp.at( str_name[i] ) == 1 ){
            cout << str_name[i] << endl;
            mp.at( str_name[i] )++;
        }
        else{
            cout << str_name[i] << ( mp.at( str_name[i] ) - 1 ) << endl;
            mp.at( str_name[i] )++;
        }
        i++;
    }
    system("pause");
    return 0;
}