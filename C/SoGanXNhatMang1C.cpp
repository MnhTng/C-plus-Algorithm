#include<stdio.h>
#include<math.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktra(int *arr, int n, int x){
	int i,j=0;
	int y=abs(arr[1]-x);
	for(i=2;i<=n;i++){
		if(abs(arr[i]-x)<y){
			y=abs(arr[i]-x);
			j=arr[i];
		}	
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
	ktra(arr,n,x);
	printf("%d",ktra(arr,n,x));
	return 0;
}

