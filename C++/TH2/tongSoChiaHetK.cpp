#include <iostream>
using namespace std;

int main(){
    int n, k;
    cout << "Nhap 2 so tu nhien n, k : ";
    cin >> n >> k;
    int i, sum = 0;
    for( i = 1; i <=n; i++ ){
        if( i % k == 0 )
            sum += i;
    }
    cout << "Tong = " << sum << endl;
    system("pause");
    return 0;
}