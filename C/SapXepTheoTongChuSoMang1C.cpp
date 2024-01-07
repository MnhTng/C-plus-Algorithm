#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++)
		scanf("%d",&arr[i]);
}
int ktra(int n){
	int s=0,i;
	while(n>0){
		i=n%10;
		s+=i;
		n/=10;
	}
	return s;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[200],b[200];
	nhap(arr,&n);
	
	int i,j;
	for(i=0;i<n;i++)
		b[i]=ktra(arr[i]);
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(b[j]<b[j-1]){
				int t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
				int p=b[j];
				b[j]=b[j-1];
				b[j-1]=p;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}

