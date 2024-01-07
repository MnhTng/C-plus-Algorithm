#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int demX(int *arr, int n, int x){
	int i,j=0;
	for(i=1;i<=n;i++){
		if(arr[i]==x)
			j++;
	}
	return j;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	
	int x;
	scanf("%d",&x);
	demX(arr,n,x);
	printf("%d",demX(arr,n,x));
	return 0;
}

