#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline( cin, s );
    int arr[300] = {0};
    for( char x : s )
        arr[(int)x]++;
    // dung vong lap for( i = [0->256] ) neu nhu muon in kq theo thu tu tu dien
    for( char x : s ){
        if( arr[(int)x] ){
            cout << x << " " << arr[(int)x] << endl; 
            arr[(int)x] = 0;
        }
    }
    // unordered_map<char, int> freq;
    // for( char x : s ){
    //     freq[x]++;
    // }
    
    // string alpha;
    // int arr[300] = {0}, count = 0;
    // for( auto ite : freq ){
    //     alpha[count] = ite.first;
    //     arr[count] = ite.second;
    //     count++;
    // }

    // for( int i = count - 1; i >= 0; i-- )
    //     cout << alpha[i] << " " << arr[i] << endl;
    system("pause");
    return 0;
}