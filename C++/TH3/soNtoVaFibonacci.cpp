#include <iostream>
using namespace std;

int nto( int x ){
    int i, count = 0;
    for( i = 1; i <= x; i++ ){
        if( x % i == 0 )
            count++;
    }
    if( count > 2 )
        return 0;
    return 1;
}


int main(){
    int n;
    cout << "Nhap so nguyen duong n : ";
    cin >> n;
    int i = 0;
    int prime = 2; // prime number : so nguyen to
    cout << n << " so nguyen to dau tien : " << endl;
    while( i < n ){
        if( nto( prime ) ){
            cout << prime << "  ";
            i++;
            prime++;
        }
        else prime++;
    }


    cout << endl << n << " so Fibonacci dau tien : " << endl;
    int j = 2;
    long long fi1 = 0, fi2 = 1, temp = 0;
    if( n == 1 )
        cout << fi1 << endl;
    else if( n == 2 )
        cout << fi1 << endl << fi2 << endl;
    else{
        cout << fi1 << endl << fi2 << endl;
        while( j < n ){
            temp = fi1 + fi2;
            cout << temp << endl;
            fi1 = fi2;
            fi2 = temp;
            j++;
        }
    }
    system("pause");
    return 0;
}