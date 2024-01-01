#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        char checkM = 'a', checkm = 'z';
        for( char x : s ){
            if( x > checkM )
                checkM = x;
            if( x < checkm )
                checkm = x;
        }

        while( checkM >= checkm ){
            int tempIndex = 0;
            if( s.find( checkM ) != string::npos ){
                while( s[tempIndex] != checkM ){
                    tempIndex++;
                }
                s.erase( 0, tempIndex );
                for( int i = 0; i < s.size(); i++ ){
                    if( s[i] == checkM ){
                        cout << s[i];
                        tempIndex = i;
                    }
                }
                s.erase( 0, tempIndex + 1 );
            }
            checkM--;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}