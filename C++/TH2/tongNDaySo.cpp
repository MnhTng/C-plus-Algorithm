#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout << "Nhap so nguyen duong n : ";
    cin >> n;
    int i, j;
    long sum = 0;
    for( i = 1; i <= n; i++ ){
        long mul = 1;
        for( j = 1; j <= i; j++ ){
            mul *=j;
        }
        sum += mul;
    }
    cout << "Tong = " << sum << endl;
    system("pause");
    return 0;
}