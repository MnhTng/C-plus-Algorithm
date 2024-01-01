/*
    Voi n chan: f(n) = n / 2;
    Voi n le: f(n) = ( -n - 1 ) / 2;
*/

#include <iostream>
using namespace std;

long long cal( long long n ){
    if( n % 2 == 0 )
        return n / 2;
    else    
        return ( - n - 1 ) / 2;
}

int main(){
    long long n;
    cin >> n;
    cout << cal( n ) << endl;
    system("pause");
    return 0;
}