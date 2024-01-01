#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout << "Nhap so tu nhien n : ";
    cin >> n;
    int i, sumLE = 0, sumChan = 0;
    for(i = 1; i <= n; i++){
        if( i % 2 == 0 )
            sumChan += i;
        else
            sumLE += i;
    }
    cout << "Tong n so tu nhien = " << sumChan + sumLE << endl;
    cout << "Tong cac so chan = " << sumChan << endl;
    cout << "Tong cac so le = " << sumLE << endl;
    system("pause");
    return 0;
}