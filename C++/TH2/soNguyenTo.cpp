#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int i, count = 1;
    for( i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            count = 0;
    }
    if( count )
        cout << n << " la so nguyen to!" << endl;
    else
        cout << n << " khong la so nguyen to!" << endl;
    system("pause");
    return 0;
}