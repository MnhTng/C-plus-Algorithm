#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void sang(){
    for( int i = 0; i <= 1000000; i++ )
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    for( int i = 2; i <= 1000; i++ ){
        if( arr[i] ){
            for( int j = i * i; j <= 1000000; j += i )
                arr[j] = 0;
        }
    }
}

void sinh( int *snt, int *kq, int size, int f_index, int sum, int n, int s, int &check ){
    if( f_index - 1 == n ){
        if( sum == s ){
            check = 0;

            for( int i = 1; i <= n; i++ )
                cout << snt[kq[i]] << " ";
            cout << endl;
        }
    }
    else{
        for( int i = kq[f_index - 1] + 1; i <= size; i++ ){
            if( sum + snt[i] <= s ){
                kq[f_index] = i;
                sinh( snt, kq, size, f_index + 1, sum + snt[i], n, s, check );
            }
            else
                break;
        }
    }
}

int main(){
    sang();

    int p, n, s;
    cin >> p >> n >> s;
    
    vector<int> v;
    for( int i = p + 1; i <= s; i++ ){
        if( arr[i] )
            v.push_back( i );
    }

    int size = v.size();
    int snt[v.size()];
    int kq[v.size() + 1];
    kq[0] = 0;
    for( long long unsigned i = 1; i <= v.size(); i++ ){
        snt[i] = v[i - 1];
        kq[i] = 0;
    }
    
    int check = 1;
    int sum = 0, f_index = 1;
    sinh( snt, kq, size, f_index, sum, n, s, check );

    if( check )
        cout << "-1" << endl;

    system("pause");
    return 0;
}

