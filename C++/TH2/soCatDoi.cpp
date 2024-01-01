#include <iostream>
using namespace std;

long long divide( long long n ){
    int arr[20], count = 0; 
    long long halfNumber = 0;
    while( n ){
        int digit = n % 10;
        n /= 10;
        if( digit == 0 )        digit = 0;
        else if( digit == 1 )   digit = 1;
        else if( digit == 8 )   digit = 0;
        else if( digit == 9 )   digit = 0;
        else                    return 0;
        arr[count] = digit;
        count++;
    }
    for( int i = count - 1; i >= 0; i-- )
        halfNumber = halfNumber * 10 + arr[i];
    return halfNumber;
} 

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        if( divide( n ) )
            cout << divide( n ) << endl;
        else    
            cout << "INVALID" << endl;  
    }
    system("pause");
    return 0;
}