#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());

        int check = 1;
        for(int i = 0; i < n; i++){
            if(s < v[i].first){
                cout << "NO" << endl;
                check = 0;
                break;
            }
            else
                s += v[i].second;
        }
        if(check)
            cout << "YES" << endl;
    }
    system("pause");
    return 0;
}