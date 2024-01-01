#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();

    vector<int> v;
    for( int i = 0; i < t; i++ ){
        string child, parent;
        getline( cin, child );
        getline( cin, parent );
        if( child.empty() || parent.empty() )
            v.push_back( 0 );
        else{
            int found = parent.find( child );
            if( found != string::npos )
                v.push_back( found );
            else
                v.push_back( -1 );
        }
    }

    for( int x : v )
        cout << x << endl;
    system("pause");
    return 0;
}