#include <bits/stdc++.h>
using namespace std;

queue<int> findIntersection( queue<int> q1, queue<int> q2 ){
    queue<int> result;

    while( !q1.empty() ){
        int size = q2.size();

        int check = 0;
        for( int i = 0; i < size; i++ ){
            if( q2.front() == q1.front() )
                check = 1;
            
            int temp = q2.front();
            q2.pop();
            q2.push( temp );
        }

        if( check ){
            int temp = q1.front();
            result.push( temp );
            q1.pop();
        }
        else
            q1.pop();
    }

    return result;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s1, s2;
        cin >> s1 >>s2;
        queue<int> q1, q2;
        vector<int> v;

        int num = 0;
        for( char x : s1 ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                if( v.size() ){
                    auto found = find( v.begin(), v.end(), num );

                    if( found == v.end() )
                        v.push_back( num );
                }
                else
                    v.push_back( num );

                num = 0;
            }
        }
        auto found = find( v.begin(), v.end(), num );
        if( found == v.end() )
            v.push_back( num );

        for( int x : v )
            q1.push( x );

        num = 0;
        for( char x : s2 ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                q2.push( num );
                num = 0;
            }
        }
        q2.push( num );

        queue<int> kq = findIntersection( q1, q2 );
        while( !kq.empty() ){
            cout << kq.front();
            kq.pop();

            if( !kq.empty() )
                cout << ",";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}