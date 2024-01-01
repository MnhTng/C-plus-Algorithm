#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Nhap he so a, b : ";
    cin >> a >> b;
    float x = ( -1.0 * b ) / a;
    if ( a == 0 ){
        if ( b == 0 )
            cout << "Phuong trinh nay vo so nghiem!" << endl;
        else
            cout << "Phuong trinh nay vo nghiem!" << endl;    
    }
    else 
        cout << "Phuong trinh " << a << "x + " << b << " = 0 la : x = " << x << endl;
    system("pause");
    return 0;    
}