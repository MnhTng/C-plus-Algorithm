#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void prime(){
    int i, j;
    for( i = 0; i <= 1000000; i++ )
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    for( i = 2; i <= 1000; i++){
        if( arr[i] ){
            for( j = i * i; j <= 1000000; j += i)
                arr[j] = 0;
        }
    }
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << n << " so nguyen to dau tien : ";
    prime();
    int count = 0;
    int i = 0;
    while( count < n ){
        if( arr[i] ){
            cout << i << " ";
            count++;
        }
        i++;
    }
    cout << endl;
    system("pause");
    return 0;
}