#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int m = n, temp = 0;
    int even = 0, odd = 0;
    while( m ){
        temp = m % 10;
        m /= 10;
        if( temp % 2 == 0 )
            even++;
        else 
            odd++;
    }
    cout << n << " co " << even << " chu so chan va " << odd << " chu so le!" << endl;

    
    int p = n, rev = 0;
    while( p ){
        rev = rev * 10 + p % 10;
        p /= 10;
    }
    if( rev == n )
        cout << n << " la so thuan nghich!" << endl;
    else
        cout << n << " khong la so thuan nghich!" << endl;
    system("pause");
    return 0;
}