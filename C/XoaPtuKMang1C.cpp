#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
void xoa(int *arr, int n, int k){
	int i,b[100];
	for(i=1;i<=n;i++){
		b[i]=arr[i];
	}
	for(i=k;i<n;i++){
		arr[i]=b[i+1];
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	int k;
	scanf("%d",&k);
	if(k>=n || k<1)
		return 0;
	else{
		int i;
		xoa(arr,n,k);
		for(i=1;i<n;i++){
			printf("%d ",arr[i]);
		}
	}	
	return 0;
}

