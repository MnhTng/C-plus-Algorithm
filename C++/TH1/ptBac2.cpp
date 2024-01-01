#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    cout << "Nhap he so a, b, c : ";
    cin >> a >> b >> c;
    float delta = b * b - 4 * a * c;
    if( a != 0 ){
        if( delta > 0){
            cout << "Nghiem phuong trinh la : " << endl;
            cout << "x1 = " << ( -b + sqrt( delta ) ) / ( 2 * a ) << endl;
            cout << "x2 = " << ( -b - sqrt( delta ) ) / ( 2 * a ) << endl;
        }
        else if ( delta == 0 )
            cout << "Phuong trinh co nghiem kep x = " << ( -1.0 * b ) / ( 2 * a ) << endl;
        else
            cout << "Phuong trinh vo nghiem!" << endl;
    }
    else{
        if( b == 0 ){
            if( c == 0 )
                cout << "Phuong trinh vo so nghiem!" << endl;
            else
                cout << "Phuong trinh vo nghiem!" << endl;
        }
        else
            cout << "Phuong trinh co nghiem x = " << ( -1.0 * c) / b << endl;
    }
    system("pause");
    return 0; 
}