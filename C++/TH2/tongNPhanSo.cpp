#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout << "Nhap so tu nhien n : ";
    cin >> n;
    int i;
    float sum = 0;
    for(i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    cout << " Tong = " << sum << endl;
    system("pause");
    return 0;
}