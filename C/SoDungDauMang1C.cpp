#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++)
		scanf("%d",&arr[i]);
}
int ktra(int *arr, int n, int a, int b){
	int i;
	for(i=b;i<n;i++){
		if(a<=arr[i])
			return 0;
	}
	return 1;	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[1000];
		nhap(arr,&n);
		
		int i;
		for(i=0;i<n;i++){
			if(ktra(arr,n,arr[i],i+1))
				printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}

