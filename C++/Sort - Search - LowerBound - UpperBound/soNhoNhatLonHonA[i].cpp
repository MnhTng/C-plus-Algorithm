#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], copy[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            copy[i] = a[i];
        }
        sort(copy, copy + n);

        for(int i = 0; i < n; i++){
            auto ite = upper_bound(copy, copy + n, a[i]);

            if(ite == copy + n)
                cout << "_ ";
            else
                cout << *ite << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}