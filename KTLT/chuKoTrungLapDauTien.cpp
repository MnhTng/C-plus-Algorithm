<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        queue<char> q;
        vector<int> v;
        map<char, int> mp;
        int pos = 0;

        for( char x : s ){
            if( !mp[x] ){
                q.push( x );
                v.push_back( pos );
            }
            
            pos++;
            mp[x]++;
        }

        int check = 1, count = 0;
        while( !q.empty() ){
            if( mp[q.front()] == 1 ){
                check = 0;
                cout << v[count] << endl;
                break;
            }
            
            count++;
            q.pop();
        }

        if( check )
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        queue<char> q;
        vector<int> v;
        map<char, int> mp;
        int pos = 0;

        for( char x : s ){
            if( !mp[x] ){
                q.push( x );
                v.push_back( pos );
            }
            
            pos++;
            mp[x]++;
        }

        int check = 1, count = 0;
        while( !q.empty() ){
            if( mp[q.front()] == 1 ){
                check = 0;
                cout << v[count] << endl;
                break;
            }
            
            count++;
            q.pop();
        }

        if( check )
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
>>>>>>> eae342db04ecc0fa34da46a745adf84bd32f9d63
}