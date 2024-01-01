#include <bits/stdc++.h>
using namespace std;

int main(){
    int  t;
    cin >> t;
    while( t-- ){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for( int &x : a )
            cin >> x;
        for( int &x : b )
            cin >> x;
        
        int i = 0, j = 0, result = 0;
        while( i < n && j < m ){
            if( a[i] < b[j] )
                i++;
            else if( a[i] > b[j] )
                j++;
            
            if( a[i] == b[j] ){
                int countA = 0, countB = 0;
                while( a[i] == b[j] ){
                    countA++;
                    i++;
                }
                while( b[j] == a[i - 1] ){
                    countB++;
                    j++;
                }
                result += countA * countB;
            }
        }
        cout << result << endl;
    }
    system("pause");
    return 0;
}