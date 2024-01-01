#include <bits/stdc++.h>
using namespace std;

void sinh( int *pos, int n, int k, int f_index, int sum, int &count ){
    if( f_index - 1 == k && sum >= n ){
        if( sum == n )
            count++;
    }
    else{
        for( int i = pos[f_index - 1] + 1; i <= n; i++ ){
            if( sum > n )
                break;
            sinh( pos, n, k, f_index + 1, sum + i, count );
        }
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;

        int pos[k + 1];
        memset( pos, 0, sizeof( pos ) );
        int f_index = 1, sum = 0, count = 0;

        sinh( pos, n, k, f_index, sum, count );

        cout << count << endl;
    }
    system("pause");
    return 0;
}
