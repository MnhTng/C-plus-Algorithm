#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        stack<char> bo_ngoac;
        stack<char> result;

        for( char x : s ){
            if( bo_ngoac.empty() ){
                bo_ngoac.push( x );

                string temp = "";
                while( !result.empty() ){
                    temp = result.top() + temp;
                    result.pop();
                }

                cout << temp;
            }
            else{
                if( bo_ngoac.top() == '(' && x == ')' )
                    bo_ngoac.pop();
                else
                    bo_ngoac.push( x );

                if( !bo_ngoac.empty() )
                    result.push( x );
            }
        }

        string temp = "";
        while( !result.empty() ){
            temp = result.top() + temp;
            result.pop();
        }

        cout << temp << endl;
    }
    system("pause");
    return 0;
}