#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string child, parent;
        cin >> child >> parent;
        string con = child.substr( 1, child.size() - 2 );
        string cha = parent.substr( 1, parent.size() - 2 );
        
        if( con.empty() )
            cout << "0" << endl;
        else{
            int found = cha.find( con );
            if( found != string::npos )
                cout << found << endl;
            else
                cout << "-1" << endl;
        }
    }
    system("pause");
    return 0;
}