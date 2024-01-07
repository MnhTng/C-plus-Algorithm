#include<stdio.h>
int nhap(int arr[][10], int *m, int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++)
			scanf("%d",&arr[i][j]);
	}
}
void chuyenVi(int arr[][10], int tam[][10], int m, int n){
	int i,j,a=0;
	for(i=0;i<n;i++){
		int b=0;
		for(j=0;j<m;j++)
			tam[i][j]=arr[b++][a];
		a++;
	}
}
int main(){
	int t,a=1;;
	scanf("%d",&t);
	while(t--){
		int m,n;
		scanf("%d%d",&m,&n);
		int arr[10][10],tam[10][10],b[10][10];
		nhap(arr,&m,&n);
		chuyenVi(arr,tam,m,n);
		printf("Test %d:\n",a++);
		int i,j,k;
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
				long s=0;
				for(k=0;k<n;k++){
					s+=arr[i][k]*tam[k][j];
				}
				b[i][j]=s;
			}
		}
		for(i=0;i<m;i++){
			for(j=0;j<m;j++)
				printf("%d ",b[i][j]);
			printf("\n");	
		}
		printf("\n");
	}
	return 0;
}

