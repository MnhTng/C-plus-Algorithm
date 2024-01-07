#include<stdio.h>
int nhap(int arr[][100], int *m, int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++)
			scanf("%d",&arr[i][j]);		
	}
}
int main(){
	int t,a=1;
	scanf("%d",&t);
	while(t--){
		int m,n;
		scanf("%d%d",&m,&n);
		int arr[100][100];
		nhap(arr,&m,&n);
		
		printf("Test %d:\n",a++);
		int i,j;
		for(i=1;i<m;i++){
			for(j=1;j<n;j++)
				printf("%d ",arr[i][j]);
			printf("\n");	
		}
		printf("\n");
	}
	return 0;
}

