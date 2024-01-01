#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int i;
    srand(time(NULL));
    for( i = 0; i < n; i++ ){
        cout << rand()%100 << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
