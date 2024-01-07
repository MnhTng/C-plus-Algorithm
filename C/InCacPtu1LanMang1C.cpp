#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktra(int *b, int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(b[i]==x)
			return 0;
	}
	return -1;
}
void lietKe(int *arr, int n){
	int b[100],c=0;
	int i;
	for(i=0;i<n;i++){
		int y=ktra(b,c,arr[i]);
		if(y==-1){
			b[c]=arr[i];
			c++;
		}
	}
	for(i=0;i<c;i++){
		printf("%d ",b[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	lietKe(arr,n);
	return 0;
}

