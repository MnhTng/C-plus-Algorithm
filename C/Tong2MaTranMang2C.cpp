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
	int a[100][100],b[100][100];
	scanf("%d%d",&m,&n);
	nhap(a,&m,&n);
	nhap(b,&m,&n);
	
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

