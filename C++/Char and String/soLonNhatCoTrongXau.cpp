#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int i = 0;
        long max = -1;
        while( i < s.size() ){
            long num = 0, cond = 0;
            while( '0' <= (int)s[i] && (int)s[i] <= '9' ){
                num = num * 10 + ( (int)s[i] - '0' );
                cond = 1; 
                i++;
            }
            if( num > max && cond )
                max = num;
            else
                i++;
        }
        cout << max << endl;
    }
    system("pause");
    return 0;
}