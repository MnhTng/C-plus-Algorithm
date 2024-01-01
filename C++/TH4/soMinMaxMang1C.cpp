#include <iostream>
using namespace std;

int min( int *arr, int x ){
    int i, min = arr[0];
    for( i = 0; i < x; i++ ){
        if( arr[i] < min )
            min = arr[i];
    }
    return min;
}

int max( int *arr, int x ){
    int i, max = arr[0];
    for( i = 0; i < x; i++ ){
        if( arr[i] > max )
            max = arr[i];
    }
    return max;
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int arr[n];
    int i;
    cout << "Nhap cac phan tu cua mang : ";
    for( i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    cout << "So lon nhat : " << max( arr, n ) << endl;
    cout << "So be nhat : " << min( arr, n ) << endl;
    system("pause");
    return 0;
}