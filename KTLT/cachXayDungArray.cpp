#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        int n;
        cin >> s >> n;
        queue<int> q;

        int num = 0;
        for( char x : s ){
            if( x != ',' )
                num = num * 10 + ( x - '0' );
            else{
                q.push( num );
                num = 0;
            }
        }
        q.push( num );

        int count = 1, check = 0;
        while( !q.empty() ){
            cout << "Push";

            if( count != q.front() ){
                cout << ", ";
                cout << "Pop";
            }
            else
                q.pop();

            if( !q.empty() )
                cout << ", ";

            count++;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}