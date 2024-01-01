#include <iostream>
using namespace std;

void tang( int *arr, int x ){
    int i, j;
    for( i = 0; i < x; i++ ){
        for( j = x - 1; j > i; j-- ){
            if( arr[j] < arr[j-1] ){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int x;
    cout << "Nhap so tuy y : ";
    cin >> x;

    int arr[100];
    cout << "Nhap vao mang : ";
    int i;
    for( i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    tang( arr, n );
    int temp = 0;
    while ( temp < n ){
        if( arr[temp] > x ){
            cout << x << " ";
            break;
        }
        cout << arr[temp] << " ";
        temp++;
    }
    if( temp == n )
        cout << x;
    for( i = temp; i < n; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl; 
    system("pause");
    return 0;
}