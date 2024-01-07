#include<stdio.h>
void matran(int arr[][20], int n){
	int i,j;
	for(i=0;i<n;i++){
		int a=1;
		for(j=0;j<=i;j++)
			arr[i][j]=a++;
		for(j=i+1;j<n;j++)
			arr[i][j]=0;	
	}
}
void chuyenVi(int arr[][20], int tam[][20], int n){
	int i,j,a=0;
	for(i=0;i<n;i++){
		int b=0;
		for(j=0;j<n;j++)
			tam[i][j]=arr[b++][a];
		a++;
	}
}
int main(){
	int t,a=1;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[20][20],tam[20][20],b[20][20];
		matran(arr,n);
		chuyenVi(arr,tam,n);
		printf("Test %d:\n",a++);
		int i,j,k;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				long s=0;
				for(k=0;k<n;k++){
					s+=arr[i][k]*tam[k][j];
				}
				b[i][j]=s;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				printf("%d ",b[i][j]);
			printf("\n");	
		}
		printf("\n");
	}
	return 0;
}


