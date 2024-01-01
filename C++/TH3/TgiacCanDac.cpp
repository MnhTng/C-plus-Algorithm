#include <iostream>
using namespace std;

int main(){
    int h;
    cout << "Nhap so nguyen h : ";
    cin >> h;
    int i, j;
    for( i = 0; i < h; i++ ){
        for( j = 0; j < 2 * h; j++ ){
            if( j >= h - i && j <= h + i )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}