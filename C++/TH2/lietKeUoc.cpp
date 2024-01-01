#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout << "Nhap so tu nhien n : ";
    cin >> n;
    int i, count = 0;
    cout << "Cac uoc so cua " << n << " la : ";
    for( i = 1; i <= n; i++ ){
        if( n % i == 0){
            cout << i << " ";
            count++;
        }
    }
    cout << endl << "So uoc so cua " << n << " la : " << count << endl;
    system("pause");
    return 0;
}