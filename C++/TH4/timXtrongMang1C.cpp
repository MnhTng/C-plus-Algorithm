#include <iostream>
using namespace std;

int solution( int *arr, int x, int n ){
    int i, count = 0;
    for( i = 0; i < x; i++ ){
        if( arr[i] == n )
            count++;
    }
    return count;
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int x;
    cout << "Nhap so can tim : ";
    cin >> x;
    int arr[n];
    cout << "Nhap " << n  << " phan tu cua mang : ";
    int i;
    for( i = 0; i < n; i++ )
        cin >> arr[i];
    cout << "So lan cuat hien cua phan tu " << x << " trong mang : " << solution( arr, n, x ) << endl;
    system("pause");
    return 0;
}