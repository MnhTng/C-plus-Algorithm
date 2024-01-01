#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int m = n, cs = 0;
    while( m ){
        cs += m % 10;
        m /= 10;
    }
    cout << "Tong cac chu so cua " << n << " la : " << cs << endl;

    
    cout << "Thua so cua " << n << " la : ";
    int  p = n, count = 2;
    while( p != 1 ){
        if( p % count == 0 ){
            while( p % count == 0 ){
                cout << count;
                p /= count;
                if( p != 1 )
                    cout << " x ";
            }
        }
        else count++;
    }
    cout << endl;
    system("pause");
    return 0;
}