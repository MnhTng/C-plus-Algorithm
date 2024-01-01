#include <iostream>
using namespace std;

int nto( int x ){
    int i, count = 0;
    for( i = 1; i <= x; i++ ){
        if( x % i == 0 )
            count++; 
    }
    if( count > 2 )
        return 0;
    return 1;
}

int cs( int x ){
    int y = x, temp = 0;
    while( y ){
        temp += y % 10;
        y /= 10;
    }
    if( nto( temp ) )
        return 1;
    else
        return 0;
}

int dayGiam( int *arr ){
    int i;
    for( i = 0; i < 7; i++ ){
        if( arr[i] < arr[i+1] )
            return 0;
    }
    return 1;
} 

int main(){
    int i;
    cout << "Cac so nguyen to khong tang : " << endl;
    for( i = 10000000; i < 100000000; i++ ){
        int j = i, n = 7;
        int* arr = new int[10];
        while( j ){
            arr[n] = j % 10;
            j /= 10;
            n--;
        }
        if( dayGiam( arr ) ){
            if( cs( i ) ){
                if( nto( i ) )
                    cout << i << endl;
            }      
        }
    }
    system("pause");
    return 0;
}