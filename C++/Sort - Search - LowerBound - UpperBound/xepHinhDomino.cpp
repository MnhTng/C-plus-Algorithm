#include <bits/stdc++.h>
using namespace std;

int check(int a, int b, int n, int s){
    return ((s / a) * (s / b)) >= n;
}

int main(){
    int a, b, n;
    cin >> a >> b >> n;

    int l = 0, r = max(a, b) * n;
    int result = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(check(a, b, n, mid)){
            result = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << result << endl;
    system("pause");
    return 0;
}