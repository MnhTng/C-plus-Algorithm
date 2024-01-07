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
	int arr[100][100];
	scanf("%d%d",&m,&n);
	nhap(arr,&m,&n);
	
	int i,j;
	for(i=0;i<n;i++){
		int a=0,b=i;
		for(j=0;j<m;j++){
			printf("%d ",arr[a][b]);
			a++;
		}
		printf("\n");
	}
	return 0;
}

