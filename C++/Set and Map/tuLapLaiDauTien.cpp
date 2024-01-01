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
            map<string, int> mp;
            stringstream ss( n );
            string temp;
            bool check = false;
            while( ss >> temp ){
                mp[temp]++;
                if( mp[temp] == 2 ){
                    check = true;
                    cout << temp << endl;
                    break;
                }
            }
            if( !check )
                cout << "0" << endl;
        }
    }
    system("pause");
    return 0;
}