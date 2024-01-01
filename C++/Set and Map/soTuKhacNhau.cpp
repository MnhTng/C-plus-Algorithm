#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string n;
        getline( cin, n );
        if( n.size() > 10000 )
            return 0;
        else{
            set<string> s;
            stringstream ss( n );
            string temp;
            while( ss >> temp )
                s.insert( temp );
            cout << s.size() << endl;
        }
    }
    system("pause");
    return 0;
}