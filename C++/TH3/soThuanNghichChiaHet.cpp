#include <iostream>
using namespace std;

int main(){
    int k;
    cout << "Nhap so nguyen k : ";
    cin >> k;
    int i = 10000000;
    cout << "So thuan nghich chia het cho " << k << " la : " << endl;
    while( i < 100000000 ){
        int temp = i, rev = 0;
        while( temp ){
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if( rev == i ){
            int cs = 0, j = i;
            while( j ){
                cs += j % 10;
                j /= 10;
            }
            if( cs % k == 0 )
                cout << i << "        ";
        }
        i++;
    }
    cout << endl;
    system("pause");
    return 0;   
}