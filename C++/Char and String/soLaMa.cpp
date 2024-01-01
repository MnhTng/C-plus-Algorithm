#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        map<char, int> mp = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
        int kq = 0, i = 0;
        while( i < s.size() - 1 ){
            int temp = mp[s[i]];
            int next_index = mp[s[i + 1]];
            if( temp > next_index ){
                kq += temp;
                i++;
            }
            else if( temp == next_index ){
                kq += temp;
                i++;
            }
            else{
                kq += next_index - temp; 
                i += 2;
            }
        }
        if( i < s.size() ){
            int temp = mp[s[i]];
            kq += temp;
        }
        cout << kq << endl;
    }
    system("pause");
    return 0;
}