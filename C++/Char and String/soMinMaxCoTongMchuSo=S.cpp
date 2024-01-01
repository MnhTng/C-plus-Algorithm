#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, s;
        cin >> m >> s;
        vector<string> max, min;
        int tempM = s, tempm = s - 1, count = m;
        if( s > 9 * m )
            cout << "-1 -1" << endl;
        else{
            while( count-- ){
                if( tempM >= 9 ){
                    max.push_back( "9" );
                    tempM -= 9;
                }
                else{
                    string temp = to_string( tempM );
                    max.push_back( temp );
                    tempM -= tempM;
                }
                if( tempm >= 9 ){
                    min.insert( min.begin(), "9" );
                    tempm -= 9;
                }
                else{
                    if( count == 0 ){
                        string x = to_string( tempm + 1 );
                        min.insert( min.begin(), x );
                    }
                    else{
                        string temp = to_string( tempm );
                        min.insert( min.begin(), temp );
                        tempm -= tempm;
                    }
                }
            }
            for( auto x : min )
                cout << x;
            cout << " ";
            for( auto x : max )
                cout << x;
            cout << endl;
        }
    }
    system("pause");
    return 0;
}