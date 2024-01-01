#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        vector<int> v;
        v.push_back( 1 );

        for( long long unsigned i = 0; i < s.size() - 1; i++ ){
            for( long long unsigned j = i + 1; j < s.size(); j++ ){
                int count = 1;
                char c = s[i];

                for( long long unsigned k = j; k < s.size(); k++ ){
                    if( tolower( c ) < tolower( s[k] ) ){
                        count++;
                        c = s[k];
                    }

                }

                v.push_back( count );
            }
        }

        sort( v.begin(), v.end() );
        cout << v[v.size() - 1] << endl;
    }
    system("pause");
    return 0;
}