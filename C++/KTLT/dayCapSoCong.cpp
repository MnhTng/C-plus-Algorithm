#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while( t-- ){
		int n;
		cin >> n;
		long long check = 0, cond = 1;
		long long index;
		long long arr[n];
		if( n == 1 ){
			int x;
			cin >> x;
			cout << "YES" << endl;
		}
		else if( n == 2 ){
			int a , b;
			cin >> a >> b;
			cout << "YES" << endl;
		}
		else{
			for( int i = 0; i < n; i++ ){
				cin >> arr[i];
				if( i == 0 )
					index = arr[i];
				else if( i == 1 ){
					check = arr[i] - index;
					index = arr[i];
				}
				else{
					if( arr[i] - index != check )
						cond = 0;
					
					index = arr[i];
				}
			}
			if( cond )
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
    system("pause");
	return 0;
}