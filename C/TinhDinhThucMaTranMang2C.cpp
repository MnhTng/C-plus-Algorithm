#include<stdio.h>
int nhap(int arr[][10], int *n){
	int i,j;
	for(i=0;i<*n;i++){
		for(j=0;j<*n;j++)
			scanf("%d",&arr[i][j]);
	}
}
int dinhThuc(int arr[][10], int n){
	int i,j,k;
	int s=0,x;
	if(n==1)
		return arr[0][0];
	if(n==2)
		return arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
	for(k=0;k<n;k++){
		int b[10][10];
		for(i=1;i<n;i++){
			for(j=0;j<n;j++){
				if(j<k)
					b[i-1][j]=arr[i][j];
				else if(j>k)
					b[i-1][j-1]=arr[i][j];
			}
		}
		if(k%2==0)
			x=1;
		else
			x=-1;
		s+=arr[0][k]*x*dinhThuc(b,n-1);		
	}	
	return s;		
}
int main(){
	int n;
	int arr[10][10];
	scanf("%d",&n);
	nhap(arr,&n);
	
	int a=dinhThuc(arr,n);
	printf("%d",a);
	return 0;
}

