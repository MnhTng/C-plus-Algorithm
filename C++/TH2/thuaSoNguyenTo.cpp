#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int i = 2;
    while( n != 1 ){
        if( n % i == 0 ){
            while( n % i == 0){
                n /= i;
                cout << i;
                if( n != 1 )
                    cout << " x ";
            }
        }
        else
            i++;
    }
    cout << endl;
    system("pause");
    return 0;
}