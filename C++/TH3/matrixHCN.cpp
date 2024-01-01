#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Nhap x, y : ";
    cin >> x >> y;
    int i, j;
    for( i = 0; i < x; i++){
        for( j = 0; j < y; j++ )
            cout << "* ";
        cout << endl;
    }
    system("pause");
    return 0;
}