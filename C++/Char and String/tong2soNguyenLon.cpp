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
        if( s1.size() < s2.size() )
            s1 += string( s2.size() - s1.size(), '0' );
        else
            s2 += string( s1.size() - s2.size(), '0' );
        

        int carry = 0;
        vector<int> v;
        for( int i = 0; i < s1.size(); i++ ){
            int num1 = (int)s1[i] - 48, num2 = (int)s2[i] - 48;
            num1 = num1 + num2 + carry;
            if( num1 > 9 ){
                v.push_back( num1 % 10 );
                carry = 1;
            }
            else{
                v.push_back( num1 );
                carry = 0;
            }
        }

        
        if( carry == 1 )
            cout << "1";
        for( int i = v.size() - 1; i >= 0; i-- )
            cout << v[i];
        cout << endl;
    }
    system("pause");
    return 0;
}