#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int nam[m], nu[n];
    for( int i = 0; i < m; i++ )
        cin >> nam[i];
    for( int i = 0; i < n; i++ )
        cin >> nu[i];
    sort( nam, nam + m );
    sort( nu, nu + n );
    int i = 0, j = 0, count = 0;
    while( i < m && j < n ){
        if( nam[i] > nu[j] ){
            count++;
            i++;
            j++;
        }
        else
            i++;
    }
    cout << count << endl;
    system("pause");
    return 0;
}