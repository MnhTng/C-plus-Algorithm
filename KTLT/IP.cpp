/*
Valid IP address consists of : 
    4 part 
    each part is need to be between 0 and 255
    without value 0 at the first index 
*/
#include <bits/stdc++.h>
using namespace std;

int validIp( string s, int begin, int end ){
    int length = end - begin + 1;
    if( length > 3 )
        return 0;
    if( s[begin] == '0' ){
        if( length == 1 || ( length == 4 && s[begin + 1] == s[begin + 2] == s[end] == 0 ) )
            return 1;
        else
            return 0;
    }
    string temp = s.substr( begin, length );
    int num = stoi( temp );
    return num >= 0 && num <= 255;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int count = 0;
        for( int i = 0; i < s.size() - 3; i++ ){
            for( int j = i + 1; j < s.size() - 2; j++ ){
                for( int k = j + 1; k < s.size() - 1; k++ ){
                    if( validIp( s, 0, i ) && validIp( s, i + 1, j ) && validIp( s, j + 1, k ) && validIp( s, k + 1, s.size() - 1 ) )
                        count++;
                }
            }
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
}
