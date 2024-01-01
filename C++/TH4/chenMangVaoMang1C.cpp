#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Nhap 2 so nguyen n1, n2 : ";
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    int i;
    cout << "Nhap cac phan tu cua mang 1 : ";
    for( i = 0; i < n1; i++ )
        cin >> arr1[i];
    cout << "Nhap cac phan tu cua mang 2 : ";
    for( i = 0; i < n2; i++ )
        cin >> arr2[i];
    int k;
    cout << "Nhap so bat ky : ";
    cin >> k;

    cout << "Sau khi chen mang vao vi tri thu " << k << " : " << endl;
    if( k < 0 ){
        for( i = 0; i < n2; i++ )
            cout << arr2[i] << " ";
        for( i = 0; i < n1; i++ )
            cout  << arr1[i] << " ";
    }
    else if ( k >= n1 ){
        for( i = 0; i < n1; i++ )
            cout << arr1[i] << " ";
        for( i = 0; i < n2; i++ )
            cout  << arr2[i] << " ";
    }
    else{
        for( i = 0; i < n1; i++ ){
            if( i == k )
                break;
            cout << arr1[i] << " ";
        }
        for( i = 0; i < n2; i++ )
            cout << arr2[i] << " ";
        for( i = k; i < n1; i++ )
            cout << arr1[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}