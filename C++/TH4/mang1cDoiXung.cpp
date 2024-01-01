#include <iostream>
using namespace std;

int doiXung( int *arr, int x ){
    int i;
    for( i = 0; i < x; i++ ){
        if( arr[i] != arr[x-i-1] )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cout << "Nhap so nguyen n : ";
        cin >> n;
        int arr[n];
        cout << "Cac phan tu cua mang : ";
        int i;
        for( i = 0; i < n; i++ ){
            cin >> arr[i];
        }
        if( doiXung( arr, n ) )
            cout << "Mang doi xung!" << endl;
        else
            cout << "Mang khong doi xung!" << endl;
    }
    system("pause");
    return 0;
}