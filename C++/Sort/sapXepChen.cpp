/*
                                arr : 5 7 3 2
    1: _ 5
    2: _ 5 7    ( 7 > 5 ----> giu nguyen )
    3: _ 5   7
           3    ( 3 < 7 --> copy value 7 sang vi tri hien thoi cua value 3 )
       _   5 7
         3      ( 3 < 5 --> copy value 5 sang vi tri hien thoi cua value 3 )
       _ 3 5 7
    4: _ 3 5   7
             2    ( 2 < 7 --> copy value 7 sang vi tri hien thoi cua value 2 )
       _ 3   5 7
           2      ( 2 < 5 --> copy value 5 sang vi tri hien thoi cua value 2 )
       _   3 5 7 
         2        ( 2 < 3 --> copy value 3 sang vi tri hien thoi cua value 2 )
       _ 2 3 5 7
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
        cin >> arr[i];
    cout << "Buoc 0: " << arr[0] << endl;
    for( int i = 1; i < n; i++ ){
        int j = i - 1, temp = arr[i];
        while( j >= 0 && temp < arr[j] ){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "Buoc " << i << ": ";
        for( int j = 0; j <= i; j++ )
            cout << arr[j] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}