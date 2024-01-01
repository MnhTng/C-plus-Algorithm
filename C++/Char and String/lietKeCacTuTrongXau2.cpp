#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline( cin, s );
    stringstream ss( s );
    string detach;
    unordered_set<string> word;
    while( ss >> detach )
        word.insert( detach );
    string temp[1001];
    int count = 0;
    for( string x : word ){
        temp[count] = x;
        count++;
    }
    for( int i = count - 1; i >= 0; i-- )
        cout << temp[i] << " ";
    cout << endl;
    system("pause");
    return 0;
}