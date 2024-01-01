// su dung khai trien Laplace de tinh dinh thuc matrix A theo hang thu 1
#include <iostream>
using namespace std;

int dinhThuc( int arr[10][10], int x ){
    int i, j, k;
    int det = 0, cond = 1;
    if( x == 1 )
        return arr[0][0];
    if( x == 2 )
        return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
    for( k = 0; k < x; k++ ){
        int strDet[10][10];
        for( i = 1; i < x; i++ ){
            for( j = 0; j < x; j++ ){
                if( j < k )
                    strDet[i-1][j] = arr[i][j];
                else if( j > k )
                    strDet[i-1][j-1] = arr[i][j];
            }
        }
        if( k % 2 == 0 )
            cond = 1;
        else
            cond = -1;
        det += arr[0][k] * cond * dinhThuc( strDet, x - 1 );
    }
    return det;
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int arr[10][10];
    cout << "Nhap ma tran : " << endl;
    int i, j;
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int kq = dinhThuc( arr, n );
    cout << "Dinh thuc cua ma tran cap " << n << " la : " << kq << endl;
    system("pause");
    return 0;
}