#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int arr[30];
		scanf("%d",&n);
		nhap(arr,&n);
		
		int i,a=0;
		for(i=0;i<n-1;i++){
			if(arr[i]==arr[i+1])
				a++;
		}
		printf("%d\n",a);	
	}
	return 0;
}

