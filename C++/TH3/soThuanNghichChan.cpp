#include <iostream>
using namespace std;

int reverse( int x ){
    int y = x, temp = 0;
    while( y ){
        temp = temp * 10 + y % 10;
        y /= 10;
    }
    if( temp == x )
        return 1;
    else
        return 0;
}

int cs( int x ){
    int y = x, num = 0;
    while( y ){
        num = y % 10;
        y /= 10;
        if( num % 2 != 0 )
            return 0;
    }
    return 1; 
}

int divisibleBy5( int x ){
    int y = x, sum = 0;
    while( y ){
        sum += y  % 10;
        y /= 10;
    }
    if( sum % 5 == 0 )
        return 1;
    else
        return 0;
}

int main(){
    int i;
    cout << "Cac so thuan nghich sieu CHAN chia het cho 5 : " << endl;
    for( i = 100000000; i < 1000000000; i++ ){
        if( reverse( i ) ){
            if( divisibleBy5( i ) ){
                if( cs( i ) )
                    cout << i << endl;
            }
        }
    }
    system("pause");
    return 0;
}