#include <bits/stdc++.h>
using namespace std;

int comp( string a, string b ){
    return a.size() < b.size();
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s;
        getline( cin, s );
        stringstream ss( s );
        string detach;
        multiset<string> sapxep;
        while( ss >> detach )
            sapxep.insert( detach );
        
        string temp[1001];
        int count = 0;
        for( string x : sapxep ){
            temp[count] = x;
            count++;
        }

        sort( temp, temp + count, comp );
        for( int i = 0; i < count; i++ )
            cout << temp[i] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}