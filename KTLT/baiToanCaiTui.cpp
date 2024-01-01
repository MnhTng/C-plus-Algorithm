#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t -- ){
        int n, w;
        // cout << "Nhap so do vat : ";
        cin >> n;
        // cout << "Nhap tai trong toi da : ";
        cin >> w;

        int weight[n], value[n];

        int i, j;
        // cout << "Nhap trong luong cua tung vat : ";
        for( i = 1; i <= n; i++ ){
            cin >> weight[i];
        }
        // cout << "Nhap gia tri cua tung vat : ";
        for( i = 1; i <= n; i++ ){
            cin >> value[i];
        }

        int arr[n+1][w+1];
        for( i = 0; i <= n; i++ )
            arr[i][0] = 0;
        for( i = 0; i <= w; i++ )
            arr[0][i] = 0;
        for( i = 1; i <= n; i++ ){
            for( j = 1; j <= w; j++ ){
                if(j < weight[i] )
                    arr[i][j] = arr[i-1][j];
                else{
                    int temp = arr[i-1][j-weight[i]] + value[i];
                    if( temp > arr[i-1][j])
                        arr[i][j] = temp;
                    else
                        arr[i][j] = arr[i-1][j];
                }
            }
        }

        int save[n];
        int count = 0;
        i = n, j = w;
        while( i ){
            if( arr[i][j] != arr[i-1][j] ){
                save[count] = weight[i];
                count++;
                j -= weight[i];
            }
            i--;
        }
        // tim cac do vat duoc chon 

        // cout << "Tong gia tri lon nhat cua cac do vat lay duoc la : " << endl;
        cout << arr[n][w] << endl;
        
        // cout << "Cac do vat lay duoc co trong luong la : ";
        // for( i = 0; i < count; i++ )
        //     cout << save[i] << " ";
        // cout << endl;
    }
    system("pause");
    return 0;
}