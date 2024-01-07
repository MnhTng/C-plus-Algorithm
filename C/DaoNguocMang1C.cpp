#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
void dao(int *arr, int n){
	int i,b[100];
	for(i=1;i<=n;i++){
		b[i]=arr[i];
	}
	for(i=1;i<=n;i++){
		arr[i]=b[n-i+1];
		printf("%d ",arr[i]);
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	dao(arr,n);
	return 0;
}

