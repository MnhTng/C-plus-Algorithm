#include<stdio.h>
#include<math.h>
int nhap(int arr[][100], int *m, int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++)
			scanf("%d",&arr[i][j]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int a=0;
		for(j=0;j<=i;j++)
			printf("%d ",a);
		if(i<n){
			for(j=i+1;j<n;j++)
				printf("%d ",++a);
		}
		printf("\n");
	}
	return 0;
}

