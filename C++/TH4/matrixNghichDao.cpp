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

void nghichDao( int arr[10][10], int x ){
    int i, j, a, b;
    int det1[10][10], y = 1;
    for( i = 0; i < x; i++ ){
        for( j = 0; j < x; j++ ){
            int extra[10][10];
            for( a = 0; a < x; a++ ){
                for( b = 0; b < x; b++ ){
                    if( a < i ){
                        if( b < j )
                            extra[a][b] = arr[a][b];
                        else if( b > j )
                            extra[a][b-1] = arr[a][b];
                    }
                    else if( a > i ){
                        if( b < j )
                            extra[a-1][b] = arr[a][b];
                        else if( b > j )
                            extra[a-1][b-1] = arr[a][b];
                    }
                }
            }
            if( ( i + j ) % 2 == 0 )
                y = 1;
            else
                y = -1;
            det1[i][j] = y * dinhThuc( extra, x - 1 );
        }
    }
    float k = dinhThuc( arr, x );
    for( i = 0; i < x; i++ ){
        for( j = 0; j < x; j++ )
            cout << det1[j][i] * ( 1.0 / k ) << " ";
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int arr[10][10];
    cout << "Nhap cac phan tu mang : " << endl;
    int i, j;
    for( i = 0; i < n; i++ ){
        for( j = 0; j < n; j++ ){
            cin >> arr[i][j];
        }
    }

    if(dinhThuc( arr, n ) == 0 )
        cout << "Ma tran khong ton tai ma tran nghich dao!" << endl;
    else
        nghichDao( arr, n );
    system("pause");
    return 0;
}