#include <bits/stdc++.h>
using namespace std;

int comp( pair<int, int> a, pair<int, int> b ){
    if( a.first > b.first )
        return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s1, s2;
        getline( cin, s1 );
        getline( cin, s2 );
        stringstream ss1( s1 ), ss2( s2 );
        string detach;
        map<int, int> mp;

        while( ss1 >> detach ){
            if( detach == "+" )
                continue;
            int i = 0, num = 0, exponent = 0;
            while( i < detach.size() ){
                while( '0' <= (int)detach[i] && (int)detach[i] <= '9' ){
                    num = num * 10 + ( detach[i] - '0' );
                    i++;
                }
                i += 3;
                while( '0' <= (int)detach[i] && (int)detach[i] <= '9' ){
                    exponent = exponent * 10 + ( detach[i] - '0' );
                    i++;
                }
            }
            mp[exponent] += num;
        }
        while( ss2 >> detach ){
            if( detach == "+" )
                continue;
            int i = 0, num = 0, exponent = 0;
            while( i < detach.size() ){
                while( '0' <= (int)detach[i] && (int)detach[i] <= '9' ){
                    num = num * 10 + ( detach[i] - '0' );
                    i++;
                }
                i += 3;
                while( '0' <= (int)detach[i] && (int)detach[i] <= '9' ){
                    exponent = exponent * 10 + ( detach[i] - '0' );
                    i++;
                }
            }
            mp[exponent] += num;
        }

        vector<pair<int, int>> v( mp.begin(), mp.end() );
        // tao vector chua cac phan tu tu map
        sort( v.begin(), v.end(), comp );
        int count = 0;
        for( auto ite : v ){
            cout << ite.second << "*x^" << ite.first;
            count++;
            if( count < v.size() )
                cout << " + ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}