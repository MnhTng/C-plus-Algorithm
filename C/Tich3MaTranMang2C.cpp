#include<stdio.h>
int nhap(int arr[][100], int *m, int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++)
			scanf("%d",&arr[i][j]);
	}
}
void tich(int a[][100], int b[][100], int x[][100], int m, int n, int k){
	int i,j,s,d;
	for(i=0;i<m;i++){
		for(j=0;j<k;j++){
			s=0;
			d=0;
			while(d<n){
				s+=a[i][d]*b[d][j];
				d++;
			}
			x[i][j]=s;
		}
	}
}
int main(){
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int a[100][100],b[100][100],c[100][100],d[100][100],x[100][100];
	nhap(a,&m,&n);
	nhap(b,&n,&p);
	nhap(c,&p,&q);
	
	tich(a,b,x,m,n,p);
	tich(x,c,d,m,p,q);
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<q;j++)
			printf("%d ",d[i][j]);
		printf("\n");	
	}
	return 0;
}

