#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int fi1 = 0, fi2 = 1;
    if( n == 0 )
        cout << "So Fibonacci thu 0 la : " << fi1 << endl;
    else if( n == 1 )
        cout << "So Fibonacci thu 1 la : " << fi2 << endl;
    else{
        int temp;
        for( int i = 2; i <= n; i++ ){
            temp = fi1 + fi2;
            fi1 = fi2;
            fi2 = temp;
        }
        cout << "So Fibonacci thu " << n << " la : " << temp << endl;
    }
    system("pause");
    return 0;   
}