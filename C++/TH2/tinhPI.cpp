#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double c;
    cout << "Nhap so thuc c : ";
    cin >> c;
    double n = 1;
    while(1){
        double condition = 1.0 / ( 2 * n + 1 ); 
        if( condition  < c )
            break;
        else n++;
    }
    double i, mu, sum = 0;
    for( i = 0; i <= n; i++ ){
        mu = pow( -1.0, i );
        sum += mu / ( 2 * i + 1 );
    }
    double PI = 4 * sum;
    cout << "PI = " << PI << endl;
    system("pause");
    return 0;
}