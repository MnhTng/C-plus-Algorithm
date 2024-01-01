#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int count = 0, i = 2;
        while( n != 1 ){
            while( n % i == 0 ){
                n /= i;
                count++;
            }
            i++;
        }
        if( count != 3 )
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    system("pause");
    return 0;
}