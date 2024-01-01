#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        char temp = '0';
        int pos1, pos2;
        bool check = false;
        int i = s.size() - 2;
        while( i >= 0 ){
            if( s[i] > s[i + 1] ){
                check = true;
                pos1 = i;
                pos2 = i + 1;
                temp = s[i + 1];
                for( int j = i + 2; j < s.size(); j++ ){
                    if( s[j] < s[i] && s[i] - s[j] < s[i] - temp ){
                        cout << s[j] << endl;
                        temp = s[j];
                        pos2 = j;
                    }
                }
                break;
            }
            i--;
        }
        if( check ){
            swap( s.at( pos1 ), s.at( pos2 ) );
            cout << s << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    system("pause");
    return 0;
}