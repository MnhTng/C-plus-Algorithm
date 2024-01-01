#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s, z;
        cin >> s >> z;
        stack<char> sandwiches;
        queue<char> students;

        reverse( z.begin(), z.end() );

        for( char x : s ){
            if( x != ',' )
                students.push( x );
        }
        for( char x : z ){
            if( x != ',' )
                sandwiches.push( x );
        }

        int check = 1;
        while( !students.empty() ){
            for( int i = 0; i < students.size(); i++ ){
                if( students.front() == sandwiches.top() ){
                    students.pop();
                    sandwiches.pop();
                    check = 0;
                    break;
                }
                else{
                    char temp = students.front();
                    students.pop();
                    students.push( temp );
                }
            }

            if( check )
                break;

            check = 1;
        }

        cout << students.size() << endl;
    }
    system("pause");
    return 0;
}