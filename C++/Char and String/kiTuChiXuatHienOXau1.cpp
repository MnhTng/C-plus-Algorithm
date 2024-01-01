#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline( cin, s1 );
    getline( cin, s2 );
    int arr[300] = {0};
    for( char x : s2 )
        arr[(int)x] = 1;
    for( char x : s1 ){
        if( arr[(int)x] == 0 )
            arr[(int)x] = 2;
    }
    for( int i = 0; i < 256; i++ ){
        if( arr[i] == 2 )
            cout << (char)i;
    }
    cout << endl;
    system("pause");
    return 0;
}