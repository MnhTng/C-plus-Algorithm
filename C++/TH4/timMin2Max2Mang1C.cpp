#include <iostream>
using namespace std;

void up2( int *arr, int x ){
    int i;
    int max = arr[0];
    for( i = 0; i < x; i++ ){
        if( arr[i] > max )
            max = arr[i];
    }
    int max2 = arr[0];
    for( i = 0; i < x; i++ ){
        if( arr[i] >= max2 && arr[i] < max )
            max2 = arr[i];
    }
    int locate[x] = {};
    int count = 0;
    for( i = 0; i < x; i++ ){
        if( max2 == arr[i] ){
            locate[count] = i + 1;
            count++;
        }
    }
    cout << "Phan tu lon thu hai trong mang : " << max2 << endl;
    cout << "Vi tri cua phan tu lon thu hai : ";
    for( i = 0; i < count; i++ )
        cout << locate[i] << " ";
    cout << endl;
}

void down2( int *arr, int x ){
    int i;
    int min = arr[0];
    for( i = 0; i < x; i++ ){
        if( arr[i] < min )
            min = arr[i];
    }
    int min2 = arr[0];
    for( i = 0; i < x; i++ ){
        if( arr[i] < min2 && arr[i] > min )
            min2 = arr[i];
    }
    int locate[x] = {};
    int count = 0;
    for( i = 0; i < x; i++ ){
        if( min2 == arr[i] ){
            locate[count] = i + 1;
            count++;
        }
    }
    cout << "Phan tu be thu hai trong mang : " << min2 << endl;
    cout << "Vi tri cua phan tu be thu hai : ";
    for( i = 0; i < count; i++ )
        cout << locate[i] << " ";
    cout << endl;
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu cua mang : ";
    int i;
    for( i = 0; i < n; i++ )
        cin >> arr[i];
    up2( arr, n );
    down2( arr, n );
    system("pause");
    return 0;
}