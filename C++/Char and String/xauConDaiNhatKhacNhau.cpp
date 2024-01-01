#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int count = 1, i = 0;
        while( i < s.size() - 1 ){
            int temp = 1;
            if( s[i] != s[i + 1] ){
                while( s[i] != s[i + 1] && i < s.size() - 1 ){
                    temp++;
                    i++;
                }
            }
            else
                i++;
            if( temp > count )
                count = temp;
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
}