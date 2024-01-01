#include <bits/stdc++.h>
using namespace std;

int comp( pair<int, int> a, pair<int, int> b ){
    if( a.second != b.second )
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        multimap<int, int> mp;
        for( int &x : arr )
            cin >> x;
        int max = *max_element( arr, arr + n );
        int freq[max] = { 0 };
        for( int x : arr )
            freq[x]++;
        for( int x : arr )
            mp.insert( make_pair( x, freq[x] ) );
        vector<pair<int, int>> v( mp.begin(), mp.end() );
        sort( v.begin(), v.end(), comp );
        for( auto ite : v )
            cout << ite.first << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}