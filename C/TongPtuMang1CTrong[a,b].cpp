#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int tong(int *arr, int n, int *a, int *b){
	int i,j=0;
	for(i=1;i<=n;i++){
		if(arr[i]>=*a && arr[i]<=*b)
			j+=arr[i];
	}
	return j;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>=b)
		return 0;
	else{
		tong(arr,n,&a,&b);
		printf("%d",tong(arr,n,&a,&b));
	}
	return 0;
}

