#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++)
		scanf("%d",&arr[i]);
}
int tangDan(int *arr, int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				int t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	tangDan(arr,n);
	
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}

