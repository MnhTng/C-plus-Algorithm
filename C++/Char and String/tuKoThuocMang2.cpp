#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline( cin, s1 );
    getline( cin, s2 );
    set<string> filter1, filter2;
    stringstream ss2( s2 ), ss1( s1 );
    string detach;
    while( ss2 >> detach )
        filter2.insert( detach );
    while( ss1 >> detach ){
        if( filter2.count( detach ) == 0 )
            filter1.insert( detach );
    }
    for( auto x : filter1 )
        cout << x << " ";
    cout << endl;
    system("pause");
    return 0;
}