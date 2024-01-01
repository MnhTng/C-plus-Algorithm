#include <bits/stdc++.h>
using namespace std;

int nto[1001];
vector<int> v;

void sang(){
    for( int i = 0; i <= 1000; i++ )
        nto[i] = 1;
    nto[0] = nto[1] = 0;

    for( int i = 2; i <= sqrt( 1000 ); i++ ){
        if( nto[i] ){
            for( int j = i * i; j <= 1000; j += i )
                nto[j] = 0;
        }
    }

    for( int i = 2; i <= 1000; i++ ){
        if( nto[i] )
            v.push_back( i );
    }
}

void sinh( int pos, int n, int k, int f_index, int sum, int &count ){
    if( f_index - 1 == k ){
        if( sum == n )
            count++;
    }
    
    for( int i = pos; v[i] <= n; i++ ){
        if( f_index - 1 >= k )
            break;
        
        sinh( i + 1, n, k, f_index + 1, sum + v[i], count );
    }
}

int main(){
    int t;
    cin >> t;
    sang();
    while( t-- ){
        int n, k;
        cin >> n >> k;

        if( nto[n] ){
            if( k == 1 )
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else{
            int f_index = 1, sum = 0, count = 0;
            int pos = 0;

            sinh( pos, n, k, f_index, sum, count );

            cout << count << endl;
        }
    }
    system("pause");
    return 0;
}