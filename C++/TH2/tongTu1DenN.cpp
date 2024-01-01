#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout << "Nhap so tu nhien n : ";
    cin >> n;
    int i, sum = 0;
    for( i = 1; i <= n; i++ )
        sum += i;
    cout << "Tong = " << sum << endl;
    system("pause");
    return 0;
}