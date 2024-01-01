#include <iostream>
using namespace std;

int main(){
    int length, width;
    cout << "Nhap vao chieu dai, chieu rong : ";
    cin >> length >> width;
    int circuit = ( length + width ) * 2;
    int area = length * width;
    cout << "Chu vi = " << circuit << endl;
    cout << "Dien tich = " << area << endl;
    system("pause");
    return 0;
}