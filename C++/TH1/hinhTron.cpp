#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

int main(){
    double r;
    cout << "Nhap ban kinh : ";
    cin >> r;
    double circuit = 2 * PI * r;
    double area = PI * r * r;
    cout << "Chu vi = " << circuit << endl;
    cout << "Dien tich = " << area << endl;
    system("pause");
    return 0;
}