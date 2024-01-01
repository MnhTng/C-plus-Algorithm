#include <iostream>
using namespace std;

int main(){
    int m, n, k, l;
    cout << "Nhap hang va cot cho ma tran 1 : ";
    cin >> m >> n;
    cout << "Nhap hang va cot cho ma tran 2 : ";
    cin >> k >> l;

    if( n != k )
        cout << "Khong the thuc hien phep nhan ma tran!" << endl;
    else{
        int i, j, x;
        int arr1[m][n], arr2[k][l];
        cout << "Nhap cac phan tu cua ma tran 1 : " << endl;
        for( i = 0; i < m; i++ ){
            for( j = 0; j < n; j++ )
                cin >> arr1[i][j];
        }
        cout << "Nhap cac phan tu cua ma tran 2 : " << endl;
        for( i = 0; i < k; i++ ){
            for( j = 0; j < l; j++ )
                cin >> arr2[i][j];
        }
        int kq[m][l];
        for( i = 0; i < m; i++ ){
            for( j = 0; j < l; j++ ){
                int y = 0;
                for( x = 0; x < n; x++ )
                    y += arr1[i][x] * arr2[x][j];
                kq[i][j] = y;
            }
        }
        cout << "Tich cua 2 ma tran : " << endl;
        for( i = 0; i < m; i++ ){
            for( j = 0; j < l; j++ )
                cout << kq[i][j] << " ";
            cout << endl;
        }
    }
    system("pause");
    return 0;
}