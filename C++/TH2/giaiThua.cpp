#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    if( n == 0 )
        cout << n << "! = 1" << endl;
    else{
        int i;
        long giaiThua = 1;
        for( i = n; i >= 1; i-- ){
            giaiThua *= i; 
        }
        cout << n << "! = " << giaiThua << endl;
    }
    system("pause");
    return 0;
}