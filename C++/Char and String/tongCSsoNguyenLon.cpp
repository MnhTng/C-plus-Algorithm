#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int sum = 0;
        for( char x : s ){
            sum += (int)x - 48;
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;
}