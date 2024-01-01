#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n > 0){
        cout << n << " la so duong" << endl;
        if(n % 2 == 0)
            cout << n << " la so chan " << endl;
        else
            cout << n << " la so le " << endl;
    }            
    else{
        cout << n << " la so am" << endl;
        if(n % 2 == 0)
            cout << n << " la so chan " << endl;
        else
            cout << n << " la so le " << endl;  
    }
    system("pause");
    return 0;
}