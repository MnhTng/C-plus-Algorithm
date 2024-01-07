#include<stdio.h>
int nhap(int arr[][100], int *m, int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++)
			scanf("%d",&arr[i][j]);
	}
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int arr[100][100];
	nhap(arr,&m,&n);
	
	int i,j;
	for(i=0;i<m;i++){
		int a=arr[i][0];
		for(j=0;j<n;j++){
			if(arr[i][j]>a)
				a=arr[i][j];
		}
		printf("\n%d",a);
	}
	return 0;
}

