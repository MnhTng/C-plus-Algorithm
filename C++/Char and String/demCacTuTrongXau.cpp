#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline( cin, s );
    stringstream ss( s );
    string detach;
    int count = 0;
    while( ss >> detach )
        count++;
    cout << count << endl;
    system("pause");
    return 0;
}