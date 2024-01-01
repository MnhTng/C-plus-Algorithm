#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Nhap hang va cot ma tran : ";
    cin >> m >> n;
    int i, j;
    int matrix1[m][n], matrix2[m][n];
    cout << "Nhap ma tran 1 : " << endl;
    for( i = 0; i < m; i++ ){
        for( j = 0; j < n; j++ )
            cin >> matrix1[i][j];
    }
    cout << "Nhap ma tran 2 : " << endl;
    for( i = 0; i < m; i++ ){
        for( j = 0; j < n; j++ )
            cin >> matrix2[i][j];
    }
    cout << "KQ phep cong 2 ma tran : " << endl;
    for( i = 0; i < m; i++ ){
        for( j = 0; j < n; j++ )
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        cout << endl;
    }
    cout << "KQ phep tru 2 ma tran : " << endl;
    for( i = 0; i < m; i++ ){
        for( j = 0; j < n; j++ )
            cout << matrix1[i][j] - matrix2[i][j] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}