#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Nhap hang va cot : ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Nhap ma tran : " << endl;
    int i, j;
    for( i = 0; i < m; i++){
        for( j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    cout << "Ma tran chuyen vi : " << endl;
    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++)
            cout << arr[j][i] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}