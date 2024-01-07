#include<stdio.h>
#include<stdbool.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
bool doiXung(int *arr, int n){
	int i;
	for(i=1;i<=n/2;i++){
		if(arr[i]!=arr[n-i+1])
			return false;
	}
	return true;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[100];
		nhap(arr,&n);
		
		if(doiXung(arr,n))
			printf("YES\n");
		else
			printf("NO\n");	
	}	
	return 0;
}

