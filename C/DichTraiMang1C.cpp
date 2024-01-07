#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
int main(){
	int n;
	int arr[100];
	scanf("%d",&n);
	nhap(arr,&n);
	int x;
	scanf("%d",&x);
	
	int i;
	for(i=x;i<n;i++)
		printf("%d ",arr[i]);
	for(i=0;i<x;i++)
		printf("%d ",arr[i]);	
	return 0;
}

