#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t--){
        string s;
        cin >> s;
        long num = 0;
        int i = 0;
        while( i < s.size() ){
            long temp = 0;
            while( '0' <= (int)s[i] && s[i] <= '9' ){
                temp = temp * 10 + ( s[i] - '0' );
                i++;
            }
            if( temp > num )
                num = temp;
            else
                i++;
        }
        cout << num << endl;
    }
    system("pause");
    return 0;
}