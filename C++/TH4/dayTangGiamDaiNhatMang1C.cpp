#include <iostream>
using namespace std;

void longestOrShortest( int *arr, int x ){
    int i = 0, lengthMax = 0, tempIndex = 0;
    // tempIndex la chi so dau tien cua day tang hoac giam hien thoi
    bool rise = true;
    int count = 0, saveIndex[x];
    // saveIndex de luu chi so dau va cuoi cua day tang hoac giam dai nhat

    while( i < x - 1 ){
        if( ( arr[i] <= arr[i+1] && rise ) || ( arr[i] >= arr[i+1] && !rise ) )
            i++;
        // neu phan tu thu i nam trong day tang hoac giam
        else{
            if( i - tempIndex + 1 == lengthMax ){
                saveIndex[count] = tempIndex;
                count++;
            }
            else if( i - tempIndex + 1 > lengthMax ){
                lengthMax = i - tempIndex + 1;
                count = 0;
                saveIndex[count] = tempIndex;
                count++;
            }
            tempIndex = i;
            rise = !rise;
        }
    }
    if( i - tempIndex + 1 == lengthMax ){
        saveIndex[count] = tempIndex;
        count++;
    }
    else if( i - tempIndex + 1 > lengthMax ){
        lengthMax = i - tempIndex + 1;
        count = 0;
        saveIndex[count] = tempIndex;
        count++;
    }

    int m = 0, n; 
    cout << "Day tang hoac giam dai nhat : " << endl;
    while( m < count ){
        for( n = saveIndex[m]; n < saveIndex[m] + lengthMax; n++ )
            cout << arr[n] << " ";
        m += 1;
        cout << endl;
    }
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
    
    longestOrShortest( arr, n );
    system("pause");
    return 0;
}