#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    if( n % 4 == 0 )    cout << "6" << endl;
    if( n % 4 == 1 )    cout << "8" << endl;
    if( n % 4 == 2 )    cout << "4" << endl;
    if( n % 4 == 3 )    cout << "2" << endl;
    system("pause");
    return 0;
}