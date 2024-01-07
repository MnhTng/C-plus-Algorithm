#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
void tangDan(int *arr, int n){
	int i,j;
	for(i=1;i<n;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				int t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
			}
		}
	}
}
int timVT(int *arr, int n, int x){
	int i;
	if(x<arr[1])
		return 1;
	if(x>arr[n-1])
		return n; 
	for(i=1;i<n;i++){
		if(arr[i]>=x)
			return i;
	}
}
void chenX(int *arr, int n, int x){
	int i,b[100];
	tangDan(arr,n);
	for(i=1;i<n;i++){
		b[i]=arr[i];
	}
	int y=timVT(arr,n,x);
	for(i=n;i>y;i--){
		arr[i]=b[i-1];	
	}
	arr[y]=x;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	int x;
	scanf("%d",&x);
	
	int i;
	chenX(arr,n,x);
	for(i=1;i<=n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

