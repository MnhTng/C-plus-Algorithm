#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s1, s2;
        cin >> s1;
        cin >> s2;
        string temp = s2;
        string v;
        int minSize = s1.size();

        for( int i = 0; i < s1.size(); i++ ){
            int found = temp.find( s1[i] );
            if( found != string::npos ){
                int firstIndex = i, lastIndex = s1.size();
                int sizeCon = s2.size(), j = i;

                while( sizeCon > 0 && j < s1.size() ){
                    int foundd = temp.find( s1[j] );
                    if( foundd != string::npos ){
                        sizeCon--;
                        temp.erase( foundd, 1 );
                    }
                    j++;
                }

                if( sizeCon == 0 ){
                    if( lastIndex > j )
                        lastIndex = j;
                    if( lastIndex - firstIndex < minSize ){
                        minSize = lastIndex - firstIndex;
                        v.clear();
                        v = s1.substr( firstIndex, minSize );
                        v += " ";
                    }
                    else if( lastIndex - firstIndex == minSize ){
                        string sub = s1.substr( firstIndex, minSize );
                        v += sub + " ";
                    }
                }

                temp = s2;
            }
        }
        
        if( v.size() == 0 )
            cout << "-1";
        else{
            stringstream ss( v );
            string detach;
            while( ss >> detach )
                cout << detach << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}