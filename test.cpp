#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert( 88 );
    s.insert( 5 );
    s.insert( 100 );
    s.insert( 2 );
    s.insert( 100 );
    s.insert( 10 );

    for( int x : s )
        cout << x << " ";
    cout << endl;
    system("pause");
    return 0;
}