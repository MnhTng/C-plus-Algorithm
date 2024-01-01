#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so n : ";
    cin >> n;
    int i, rev = 0;
    int m = n;
    while( n ){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if( rev == m)
        cout << m << " la so thuan nghich!" << endl;
    else
        cout << m << " khong la so thuan nghich!" << endl;
    system("pause");
    return 0;
}