#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int Max(int *arr,int n,int *max){
	int i;
	for(i=1;i<=n;i++){
		if((*max)<arr[i])
			*max=arr[i];
	}
	return *max;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[100];
		nhap(arr,&n);
		
		int max=arr[1];
		int x=Max(arr,n,&max);
		printf("%d\n",x);
		int i;
		for(i=0;i<n;i++){
			if(arr[i+1]==x)
				printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

