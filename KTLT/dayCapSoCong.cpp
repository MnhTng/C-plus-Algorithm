#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int check = 0, cond = 1;
	int index;
	int arr[n];
	if( n == 1 ){
		int x;
		cin >> x;
		cout << "NO" << endl;
	}
	else if( n == 2 ){
		int a , b;
		cin >> a >> b;
		if( a - b == 0 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
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
				else
					index = arr[i];
			}
		}
		if( cond )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
    system("pause");
	return 0;
}