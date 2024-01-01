#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int i = 1, kq = 0, count;
        while( i < s.size() - 1 ){
            count = 0;
            while( s[i] == '0' && i < s.size() - 1 ){
                count++;
                i++;
            }
            if( count != 0 ){
                if( s[i] == '1' && s[i - count - 1] == '1' ){
                    kq += count;
                    count = 0;
                }
            }
            else
                i++;
        }
        if( s[i] == '1' )
            kq += count;
        cout << kq << endl;
    }
    system("pause");
    return 0;
}