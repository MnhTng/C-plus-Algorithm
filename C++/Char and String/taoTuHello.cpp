#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char arr[6] = {'h','e','l','l','o'};
    int count = 0;
    for( int i = 0; i < s.size(); i++ ){
        if( s[i] == arr[count] )
            count++;
    }
    if( count == 5 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    system("pause");
    return 0;
}