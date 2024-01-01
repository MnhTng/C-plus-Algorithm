#include <iostream>
using namespace std;

int ktra( int *arr, int x, int &y ){
    int i, count = 0, check =arr[count] - arr[count+1];
    while( check == 0 ){
        count++;
        check = arr[count] - arr[count+1];
    }
    if( check < 0 ){
        for( i = count; i < x - 1; i++ ){
            check = arr[i] - arr[i+1];
            if( check > 0 ){
                y = arr[i+1];
                return 0;
                break;
            }
        }
    }
    else if( check > 0 ){
        for( i = count; i < x - 1; i++ ){
            check = arr[i] - arr[i+1];
            if( check < 0 ){
                y = arr[i+1];
                return 0;
                break;
            }
        }
    }
    return 1;
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu mang : ";
    int i;
    for( i = 0; i < n; i++ )
        cin >> arr[i];
    
    int giaTri;
    int result = ktra( arr, n, giaTri );
    if ( result )
        cout << "YES" << endl;
    else
        cout << "Phan tu dau tien lam mat tinh sap xep : " << giaTri << endl;
    system("pause");
    return 0;
}