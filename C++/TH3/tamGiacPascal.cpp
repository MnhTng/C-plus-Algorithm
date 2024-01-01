#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so hang cua tam giac Pascal : ";
    cin >> n;
    int i, j;
    int arr[100][100];
    for( i = 0; i < n; i++ ){
        for( j = 0; j <= 2 * ( n - 1 ); j++ ){
            arr[i][j] = 1;
        }
    }
    for( i = 0; i < n; i++ ){
        int temp = n - i;
        for( j = 0; j < ( 2 * n - 1 ); j++ ){
            if( j < ( n - 1 - i ) || j > ( n - 1 + i ) )                // in ngoai khoang
                cout << "   ";
            else if( j == ( n - 1 - i ) || j == ( n - 1 + i ) )         // in vien
                cout << "   " << arr[0][0];   
            else if( ( n - 1 - i ) < j < ( n - 1 + i ) ){
                if( ( temp - ( n - 1 - i ) ) % 2 == 0 ){                // in so trong khoang
                    if( temp < ( n - 1 + i ) ){
                        arr[i][temp] = arr[i-1][temp-1] + arr[i-1][temp+1];
                        cout << "   " << arr[i][temp];
                    }                         
                }
                else                        
                    cout << "  ";                                      // in space trong khoang
                temp++;
            }                                     
        }
        cout << endl;
    }
    system("pause");
    return 0;
}