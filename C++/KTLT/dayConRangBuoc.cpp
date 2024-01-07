#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        int mink, maxk;
        cin >> s >> mink >> maxk;
        vector<int> v;
        int count = 0;

        int num = 0;
        for( char x : s ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                v.push_back( num );
                num = 0;
            }
        }

        if( num )
            v.push_back( num );
        
        int l, r;
        for( int i = 0; i < v.size(); i++ ){
            l = 0, r = i;

            for( int j = r; j < v.size(); j++ ){
                if( l == j ){
                    if( v[l] == mink && v[r] == maxk )
                        count++;

                    l++;
                }
                else{
                    int max = *max_element( v.begin() + l, v.begin() + j + 1 );
                    int min = *min_element( v.begin() + l, v.begin() + j + 1 );

                    if( max == maxk && min == mink )
                        count++;
                    
                    l++;
                }
            }
        }

        cout << count << endl;
    }
    system("pause");
    return 0;
}