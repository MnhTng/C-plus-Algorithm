#include<stdio.h>
int nhap(int arr[][100], int *m, int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++)
			scanf("%d",&arr[i][j]);
	}
}
void tich(int a[][100], int b[][100], int m, int n, int k){
	int i,j,s,d;
	for(i=0;i<m;i++){
		for(j=0;j<k;j++){
			s=0;
			d=0;
			while(d<n){
				s+=a[i][d]*b[d][j];
				d++;
			}
			printf("%d ",s);
		}
		printf("\n");	
	}
}
int main(){
	int m,n,k;
	int a[100][100],b[100][100];
	scanf("%d%d%d",&m,&n,&k);
	nhap(a,&m,&n);
	nhap(b,&n,&k);
	tich(a,b,m,n,k);
	return 0;
}

