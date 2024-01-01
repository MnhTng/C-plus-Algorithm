/*
    1234 % 5 :  1 % 5 = 1
                ( 1 * 10 + 2 ) % 5 = 2
                ( 2 * 10 + 3 ) % 5 = 3
                ( 3 * 10 + 4 ) % 5 = 4
    ==> 1234 % 5 = 4
*/
#include <bits/stdc++.h>
using namespace std;

long long surplus( string s1, string s2 ){
    long long num2 = stoll( s2 );
    long long num1 = 0;
    for( char x : s1 ){
        num1 = ( num1 * 10 + (int)x - 48 ) % num2;
    }
    return num1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s1, s2;
        cin >> s1 >> s2;
        cout << surplus( s1, s2 ) << endl;
    }
    system("pause");
    return 0;
}
