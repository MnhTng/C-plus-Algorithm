#include <bits/stdc++.h>
using namespace std;

int arr[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

int prime( int n ){
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            return 0;
    }
    return 1;
}

long long result( int n ){
    if( n == 1 )
        return 1;

    if( prime( n ) )
        return (long long)pow( 2, n - 1 );

    vector<int> v;
    while( n % 2 == 0 ){
        v.push_back( 2 );
        n /= 2;
    }

    for( int i = 3; i <= sqrt( n ); i += 2 ){
        while( n % i == 0 ){
            v.push_back( i );
            n /= i;
        }
    }

    if( n > 1 )
        v.push_back( n );

    sort( v.begin(), v.end(), greater<int>() );

    long long unsigned kq = 1;

    vector<int> freq( v.begin(), v.end() );

    // Tim so nho nhat co n uoc cho ca so chan, so le, so co dang : n = a^x 
    long long unsigned i = 0;
    while( i < freq.size() ){
        while( pow( arr[i], freq[i] * v[freq.size() - 1] - freq[i] ) < pow( arr[freq.size() - 1], freq[freq.size() - 1] - 1 ) ){
            freq[i] *= v[freq.size() - 1];
            freq.pop_back();
        }
        i++;
    }

    i = 1;
    while( i < freq.size() ){
        while( pow( arr[i], freq[i] * v[i - 1] - freq[i] ) < pow( arr[i - 1], freq[i - 1] - ( freq[i - 1] / v[i - 1] ) ) ){
            freq[i] *= v[i - 1];
            freq[i - 1] /= v[i - 1];
        }
        i++;
    }

    sort( freq.begin(), freq.end(), greater<int>() );
    for( long long unsigned i = 0; i < freq.size(); i++ )
        kq *= (long long)pow( arr[i], freq[i] - 1 );

    return kq;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        cout << result( n ) << endl;
    }
    system("pause");
    return 0;
}