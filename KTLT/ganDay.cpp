#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;

        priority_queue<int, vector<int>, greater<int>> q;
        long arr[n];
        for( int i = 0; i < n; i++){
            cin >> arr[i];
            q.push( arr[i] );
        }

        long long result = 0;
        while( q.size() > 1 ){
            long first = q.top();
            q.pop();
            long second = q.top();
            q.pop();
            result += first + second;
            q.push( first + second );
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}