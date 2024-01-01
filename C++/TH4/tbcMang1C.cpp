#include <iostream>
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
    int count = 0, sum = 0;
    for( i = 0; i < n; i++ ){
        sum += arr[i];
        count++;
    }
    float tbc = ( 1.0f * sum ) / count;
    cout << "Trung binh cong cac phan tu trong mang : " << tbc << endl;
    system("pause");
    return 0;
}