#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int sum = 0;
    int m = n;
    while( n ){
        int cs = 0;
        cs = n % 10;
        n /= 10;
        sum += cs;
    }
    cout << "Tong cac chu so cua " << m << " = " << sum << endl;
    system("pause");
    return 0;
}