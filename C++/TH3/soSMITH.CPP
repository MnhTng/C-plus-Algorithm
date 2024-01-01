#include <iostream>
using namespace std;

int sumDigits( int n ){
    int sum = 0;
    while( n ){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sumDigitsPrime( int n ){
    int i = 2, sum = 0;
    while( n != 1 ){
        while( n % i == 0 ){
            if( i < 10 ){
                sum += i;
                n /= i;
            }
            else{
                int temp = i;
                while( temp ){
                    sum += temp % 10;
                    temp /= 10;
                }
                n /= i;
            }
        }
        i++;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        if( sumDigits( n ) == sumDigitsPrime( n ) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}