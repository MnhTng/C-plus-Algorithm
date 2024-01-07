#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
int tangDan(int *arr, int n){
	int i,j;
	for(i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])
			return 0;
	}
	return 1;
}
void sapXep(int *arr, int n){
	int m=1;
	while(!tangDan(arr,n)){
		int i;
		for(i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				int t=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=t;
			}
		}
		printf("Buoc %d: ",m);
		m++;
		for(i=0;i<n;i++)
			printf("%d ",arr[i]);
		printf("\n");	
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	sapXep(arr,n);
	return 0;
}

