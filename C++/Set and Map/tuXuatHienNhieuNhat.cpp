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
            while( ss >> temp ){
                mp[temp]++;
            }
            string kq;
            int max = 0;
            for( auto ite : mp ){
                if( ite.second > max ){
                    max = ite.second;
                    kq = ite.first;
                }
            }
            cout << kq << endl;
        }
    }
    system("pause");
    return 0;
}