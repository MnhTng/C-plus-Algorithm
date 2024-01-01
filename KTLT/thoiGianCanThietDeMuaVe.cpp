#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        int k;
        cin >> s >> k;
        map<int, int> mp;
        queue<int> q;
        int kq = 0, count = 0;

        int so_ve = 0;
        for( char x : s ){
            if( x != ',' )
                so_ve = so_ve * 10 + ( x - '0' );
            else{
                q.push( so_ve );
                mp[count] = so_ve;
                so_ve = 0;
                count++;
            }
        }

        if( so_ve ){
            q.push( so_ve );
            mp[count] = so_ve;
        }
        count = 0;

        int pos = 0, check = 1;
        while( 1 ){
            int size = q.size();

            for( int i = 0; i < size; i++ ){
                if( !mp[k] ){
                    check = 0;
                    kq += count;
                    break;
                }
                else if( q.front() ){
                    q.front() -= 1;

                    while( pos < mp.size() && !mp[pos] )
                        pos++;
                    
                    if( pos < mp.size() ){
                        mp[pos]--;
                        pos++;
                    }
                    count++;

                    int temp = q.front();
                    q.pop();
                    q.push( temp );
                }
                else
                    q.pop();
            }

            if( !check || q.empty() )
                break;
            
            kq += count;
            pos = 0;
            count = 0;
        }

        cout << kq << endl;
    }
    system("pause");
    return 0;
}