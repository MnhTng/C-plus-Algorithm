#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Nhap x, y : ";
    cin >> x >> y;
    int i, j;
    for( i = 0; i < x; i++ ){
        if( i == 0 || i == x - 1){
            for( j = 0; j < y; j++ )
                cout << "* ";
        }
        else{
            for( j = 0; j < y; j++ ){
                if( j == 0 || j ==  y - 1 )
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}