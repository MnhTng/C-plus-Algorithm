#include<stdio.h>
void nhap(int *arr, int *n){
 	static int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuat(int *arr, int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%d ",arr[i]);
	}
}
void tangDan(int *arr, int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=n;j>i;j--){
			if(arr[j]<arr[j-1]){
				int t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
			}
		}
	}
}
void giamDan(int *arr, int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=n;j>i;j--){
			if(arr[j]>arr[j-1]){
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
	xuat(arr,n);
	printf("\n");
	giamDan(arr,n);
	xuat(arr,n);;
	return 0;
}

