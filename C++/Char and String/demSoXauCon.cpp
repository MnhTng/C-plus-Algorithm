#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int k;
        cin >> k;
        int count = 0;
        vector<char> v( s.size() );
        for( int i = 0; i < s.size(); i++ ){
            v.clear();
            v.resize( s.size() );
            int num = 0;
            for( int j = i; j < s.size(); j++ ){
                auto ite = find( v.begin(), v.end(), s[j] );
                if( ite == v.end() ){
                    v.push_back( s[j] );
                    num++;
                }
                if( num == k ){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
}