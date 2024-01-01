#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu cua mang : ";
    int i;
    for( i = 0; i < n; i++ )
        cin >> arr[i];
    int x;
    cout << "Nhap so tuy y : ";
    cin >> x;
    int check = abs( x - arr[0] );
    for( i = 0; i < n; i++ ){
        int temp = abs( arr[i] - x );
        if( temp < check )
            check = temp;
    }
    int result;
    for( i = 0; i < n; i++ ){
        int test = abs( arr[i] - x );
        if( test == check )
            result = arr[i];
    }
    cout << "Gia tri gan " << x << " nhat la : " << result << endl;
    system("pause");
    return 0;
}