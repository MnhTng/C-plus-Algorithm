#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Nhap 2 so a, b : ";
    cin >> a >> b;
    if (a > b)
        cout << a << " > " << b << endl;
    else if (a < b)
        cout << a << " < " << b << endl; 
    else 
        cout << a << " = " << b << endl;
    system("pause");    
    return 0;        
}