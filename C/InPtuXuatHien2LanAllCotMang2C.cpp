#include<stdio.h>
int nhap(int arr[][100], int *n){
	int i,j;
	for(i=0;i<*n;i++){
		for(j=0;j<*n;j++)
			scanf("%d",&arr[i][j]);
	}
}
int ktra(int *b, int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(b[i]==x)
			return i;
	}
	return -1;
}
void xuat(int arr[][100], int n){
	int b[100],d[100],l[100],p[100],q[100];
	int i,j,k,h,a=0,c=0,e=0,m=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int y=ktra(b,a,arr[j][i]);
			if(y==-1){
				b[a]=arr[j][i];
				d[a]=1;
				a++;
			}
			else
				d[y]++;
		}
		for(k=0;k<a;k++){
			if(d[k]==2){
				for(h=0;h<=c;h++){
					if(b[k]==l[h]){
						m=-1;
						break;
					}
				}
				if(m!=-1){
					l[c]=b[k];
					c++;
				}
				for(h=0;h<c;h++){
					int z=ktra(p,c,l[h]);
					if(z==-1){
						p[e]=l[h];
						q[e]=1;
						e++;
					}
					else
						q[z]++;
				}
			}
		}
		for(k=0;k<100;k++)
			d[k]=0;	
		m=0;	
	}
	int x=0;
	for(i=0;i<e;i++){
		if(q[i]==n){
			printf("%d ",p[i]);
			x=1;
		}
	}
	if(x!=1)
		printf("-1");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[100][100];
		nhap(arr,&n);
		xuat(arr,n);
		printf("\n");
	}
	return 0;
}


