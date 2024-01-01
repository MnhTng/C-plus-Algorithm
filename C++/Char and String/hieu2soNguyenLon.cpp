#include <bits/stdc++.h>
using namespace std;

void swapp( string &s ){
    for( int i = 0; i < s.size() / 2; i++ ){
        char temp = s[i];
        s[i] = s[s.size() - 1 - i];
        s[s.size() - 1 - i] = temp;
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s1, s2;
        cin >> s1 >> s2;
        swapp( s1 );
        swapp( s2 );
        int check = 0;
        if( s1.size() < s2.size() ){
            s1 += string( s2.size() - s1.size(), '0' );
            check = 1;
        }
        else if( s1.size() > s2.size() ){
            s2 += string( s1.size() - s2.size(), '0' );
            check = 2;
        }
        else{
            int i = s1.size() - 1;
            while( i >= 0 ){
                if( s1[i] > s2[i] ){
                    check = 3;
                    break;
                }
                else if( s1[i] < s2[i] ){
                    check = 4;
                    break;
                }
                i--;
            }
        }
        /*
            check = 0 : 2 xau bang nhau ( s1 = s2 )
            check = 1 : xau 1 ngan hon xau 2 ( s1 < s2 )
            check = 2 : xau 1 dai hon xau 2 ( s1 > s2 )
            check = 3 : xau 1 lon hon xau 2 ( s1 > s2 )
            check = 4 : xau 1 be hon xau 2 ( s1 < s2 )
        */

        if( check == 0 )
            cout << "0" << endl;
        else{
            vector<int> v;
            int carry = 0;
            if( check == 1 || check == 4 ){
                for( int i = 0; i < s2.size(); i++ ){
                    int num1 = (int)s1[i] - 48, num2 = (int)s2[i] - 48;
                    if( num2 < num1 ){
                        num2 = num2 + 10 - num1 - carry;
                        v.push_back( num2 );
                        carry = 1;
                    }
                    else{
                        num2 = num2 - num1 - carry;
                        v.push_back( num2 );
                        carry = 0;
                    }
                }
            }
            else if( check == 2 || check == 3 ){
                for( int i = 0; i < s1.size(); i++ ){
                    int num1 = (int)s1[i] - 48, num2 = (int)s2[i] - 48;
                    if( num1 < num2 ){
                        num1 = num1 + 10 - num2 - carry;
                        v.push_back( num1 );
                        carry = 1;
                    }
                    else{
                        num1 = num1 - num2 - carry;
                        v.push_back( num1 );
                        carry = 0;
                    }
                }
            }

            
            int i = v.size() - 1;
            while( i >= 0){
                if( v[i] != 0 )
                    break;
                else
                    v.erase( v.begin() + i );
                i--;
            }
            for( i = v.size() - 1; i >= 0; i-- )
                cout << v[i];
            cout << endl;
        }
    }
    system("pause");
    return 0;
}