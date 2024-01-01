#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        if( n < 1 || n > 1000 )
            return 0;
        else{
            set<int> s;
            int i, arr[1000];
            for( i = 0; i < n; i++ )
                cin >> arr[i];
            for( i = 0; i < n; i++ ){
                s.insert(arr[i]);
            }
            cout << s.size() << endl;
        }
    }
    system("pause");
    return 0;
}
