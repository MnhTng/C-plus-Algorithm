#include <iostream>
using namespace std;

void up( int *arr, int x ){
    int i, j, change;
    for( i = 0; i < x; i++ ){
        for( j = x - 1; j > i; j-- ){
            if( arr[j] < arr[j-1] ){
                change = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = change;
            }
        }
    }
    for( i = 0; i < x; i++ )
        cout << arr[i] << " ";
}

void down( int *arr, int x ){
    int i, j, change;
    for( i = 0; i < x; i++ ){
        for( j = x - 1; j > i; j-- ){
            if( arr[j] > arr[j-1] ){
                change = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = change;
            }
        }
    }
    for( i = 0; i < x; i++ )
        cout << arr[i] << " ";
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int arr[n];
    int i;
    cout << "Nhap cac phan tu cua mang : ";
    for( i =  0; i < n; i++ )
        cin >> arr[i];
    cout << "Sap xep tang dan : ";
    up( arr, n );
    cout << endl << "Sap xep giam dan : ";
    down( arr, n );
    cout << endl;
    system("pause");
    return 0;
}