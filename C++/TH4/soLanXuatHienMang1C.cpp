#include <iostream>
using namespace std;

int first( int *arr, int x, int y, int &z ){
    int i, check = 0;
    for( i = 0; i < x; i++ ){
        if( y == arr[i] ){
            check = 1;
            z = i;
        }
    }
    return check;
    // kiem tra trong mang da xuat hien phan tu hay chua
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

    int* appear = new int[100];
    appear[n] = {};
    int* number = new int[100];

    for( i = 0; i < n; i++ )
        number[i] = 1;
    int count = 0;
    for( i = 0; i < n; i++ ){
        int vtri = 0;
        if( first( appear, n, arr[i], vtri ) ){
            number[vtri]++;
        }
        // neu mang da xuat hien phan tu do roi
        else{
            appear[count] = arr[i];
            count++;
        }
        // neu chua xuat hien phan tu do
    }
    cout << "Cac phan tu co trong mang : ";
    for( i = 0; i < count; i++ )
        cout << appear[i] << " ";
    cout << endl << "So lan xuat hien cua tung phan tu : ";
    for( i = 0; i < count; i++ )
        cout << number[i] << " ";
    cout << endl;
    
    int max = number[0], min = number[0];
    int* less = new int[100];
    int* aLot = new int[100];
    int numless = 0, numAlot = 0;

    for( i = 0; i < count; i++){
        if( number[i] > max )
            max = number[i];
        if( number[i] < min )
            min = number[i];
    }
    // tim so lan xuat hien nhieu nhat/ it nhat
    for( i = 0; i < count; i++ ){
        if( number[i] == max ){
            aLot[numAlot] = appear[i];
            numAlot++;
        }
        if( number[i] == min ){
            less[numless] = appear[i];
            numless++;
        }
    }
    // tim vi tri xuat hien nhieu nhat/ it nhat

    cout << "Phan tu xuat hien nhieu nhat : ";
    for( i = 0; i < numAlot; i++ )
        cout << aLot[i] << " ";
    cout << endl;
    
    cout << "Phan tu xuat hien it nhat : ";
    for( i = 0; i < numless; i++ )
        cout << less[i] << " ";
    cout << endl;
    system("pause");
    return 0;
}