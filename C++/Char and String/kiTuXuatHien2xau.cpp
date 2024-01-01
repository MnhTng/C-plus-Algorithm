#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline( cin, s1 );
    getline( cin, s2 );
    int arr[300] = {0};
    for( char x : s1 )
        arr[(int)x] = 1;
    for( char x : s2 ){
        if( arr[(int)x] )
            arr[(int)x] = 2;
    }
    for( int i = 0; i < 256; i++ ){
        if( arr[i] == 2 )
            cout << (char)i;
    }
    // cach lam in ra kq theo thu tu tu dien

    // set<char> s;
    // for( char x : s1 )
    //     s.insert( x );
    // for( char x : s2 ){
    //     if( s.count( x ) != 0 ){
    //         cout << x;
    //         s.erase(x);
    //     }
    // }
    // cach lam in ra kq theo thu tu xuat hien
    cout << endl;
    system("pause");
    return 0;
}