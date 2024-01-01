#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout << "Nhap so tu nhien n : ";
    cin >> n;
    int i;
    cout << "So chan nho hon n : ";
    for( i = 0; i < n; i++){
        if( i % 2 == 0 )
            cout << i << " ";
    }
    cout << endl << "So le nho hon n : ";
    for( i = 0; i < n; i++){
        if( i % 2 == 0 )
            continue;
        cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}