#include <iostream>
#include <cmath>
using namespace std;

int armstrong( int n ){
    int count = 0, arr[20];
    int  m = n;
    while( m ){
        arr[count] = m % 10;
        m /= 10;
        count++;
    }
    int i, kq = 0;
    for( i = 0; i < count; i++ )
        kq += pow( arr[i], count );
    if( kq == n )
        return 1;
    else
        return 0;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        int x = armstrong( n );
        cout << x << endl;
    }
    system("pause");
    return 0;
}