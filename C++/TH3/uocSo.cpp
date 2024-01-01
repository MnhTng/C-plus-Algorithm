#include <iostream>
using namespace std;

int Nto( int x ){
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
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int i, c1 = 0, c2 = 0;
    int* mangNto = new int[1000];
    int* mangKoNto = new int[1000];
    for( i = 2; i <= n; i++ ){
        if( n % i == 0 ){
            if( Nto( i ) ){
                mangNto[c1] = i;
                c1++;
            }
            else{
                mangKoNto[c2] = i;
                c2++;
            }
        }
    }
    cout << "Cac uoc nguyen to cua " << n << " la : ";
    for( i = 0; i < c1; i++ )
        cout << mangNto[i] << " " ;
    cout << endl;
    cout << "Cac uoc khong nguyen to cua " << n << " la : ";
    for( i = 0; i < c2; i++ )
        cout << mangKoNto[i] << " " ;
    cout << endl;
    system("pause");
    return 0;
}