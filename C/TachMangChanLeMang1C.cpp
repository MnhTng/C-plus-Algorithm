#include<stdio.h>
int nhap(int *arr,int *n){
	int i; 
	for(i=1;i<=*n;i++) 
		scanf("%d",&arr[i]); 
}
void chia(int *arr, int n){
	int c[100],l[100];
	int i,x=1,y=1;
	for(i=1;i<=n;i++){
		if(arr[i]%2==0)
			c[x++]=arr[i];
		else
			l[y++]=arr[i];	
	}
	int a=x,b=y;
	for(i=1;i<a;i++)
		printf("%d ",c[i]);
	printf("\n");
	for(i=1;i<b;i++)
		printf("%d ",l[i]);	
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	chia(arr,n);
	return 0;
}

