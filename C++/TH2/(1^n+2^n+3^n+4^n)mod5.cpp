/*
Khi tinh n mod voi 1 so nao do thi kq tra ve luon la chu so cuoi cung cua n
Luy thua tu 1 -> 4 co cac chu so cuoi cung tuan hoan voi chu ky la 4:
        n % 4:  1   2   3   0
            1:  1   1   1   1
            2:  2   4   8   6
            3:  3   9   7   1
            4:  4   6   4   6
    Tong cua day luy thua tu 1 -> 4 voi:
        n % 4 = 1:    10  =>  chu so cuoi cung = 0
        n % 4 = 2:    20  =>  chu so cuoi cung = 0
        n % 4 = 3:    20  =>  chu so cuoi cung = 0
        n % 4 = 0:    14  =>  chu so cuoi cung = 4
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    char c[300000];
    cin >> c;
    int endNumber = c[strlen(c) - 2] * 10 + c[strlen(c) - 1];
    endNumber %= 4;
    if( endNumber == 0 )
        cout << "4" << endl;
    else
        cout << "0" << endl;
    system("pause");
    return 0;
}