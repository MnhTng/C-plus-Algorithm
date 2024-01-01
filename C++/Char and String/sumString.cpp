#include <bits/stdc++.h>
using namespace std;

int sum( string s[], int length ){
    int count = 0;
    for( int i = 2; i < length; i++ ){
        int carry = 0, j = 0;
        string s1 = s[i], s2 = s[i - 1], s3 = s[i - 2];
        reverse( s1.begin(), s1.end() );
        reverse( s2.begin(), s2.end() );
        reverse( s3.begin(), s3.end() );
        string sum;

        while( j < s2.size() ){
            int temp = ( (int)s3[j] - '0' ) + ( (int)s2[j] - '0' ) + carry;
            if( temp > 9 ){
                sum += ( temp % 10 ) + '0';
                carry = 1;
            }
            else{
                sum += temp + '0';
                carry = 0;
            }
            j++;
        }

        if( carry == 1 )
            sum += '1';

        if( sum == s1 )
            count++;
    }
    if( count == length - 2 )
        return 1;
    else
        return 0;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int  k = 3, num = s.size() / k;
        bool check = false;

        while( k <= s.size() ){
            int j = 0;
            string result[k];
            int length = 0, countString = 1;

            while( countString <= k ){
                if( countString == k ){
                    result[length] = s.substr( j, s.size() - j );
                    length++;
                    countString++;
                }
                else{
                    result[length] = s.substr( j, num );
                    j += num;
                    length++;
                    countString++;
                }
            }

            if( sum( result, k ) ){
                check = true;
                break;
            }

            k++;
            num = s.size() / k;
        }

        if( !check )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    system("pause");
    return 0;
}