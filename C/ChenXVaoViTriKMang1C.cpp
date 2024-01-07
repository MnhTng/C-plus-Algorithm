#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
void chenX(int *arr, int n, int k, int x){
	int i;
	for(i=1;i<n;i++){
		if(i==k){
			arr[k]=x;
		}
	}
}
void xepLai(int *arr, int n, int k){
	int i,b[100];
	for(i=1;i<n;i++){
		b[i]=arr[i];
	}
	for(i=k+1;i<=n;i++){
		arr[i]=b[i-1];
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	int k,x;
	scanf("%d%d",&k,&x);
	if(k>=n || k<1)
		return 0;
	else{
		int i;
		xepLai(arr,n,k);
		chenX(arr,n,k,x);
		for(i=1;i<=n;i++){
			printf("%d ",arr[i]);
		}
	}	
	return 0;
}

