#include <stdio.h> 
int nhap(int *a,int *n){
	int i; 
	for(i=0;i<*n;i++) 
		scanf("%d",&a[i]); 
}
int main(){ 
	int t,k,n,m,p; 
	int a[100],b[100]; 
	scanf("%d",&t); 
	for(k=1;k<=t;k++){ 
		scanf("%d%d%d",&n,&m,&p); 
		nhap(a,&n); 
		nhap(b,&m); 
		printf("Test %d:\n",k); 
		for(int i=0;i<n;i++){ 
			if(i==p){ 
				int j;
				for(j=0;j<m;j++){ 
					printf("%d ",b[j]); 
				} 
			} 
			printf("%d ",a[i]); 
		} 
		printf("\n"); 
	} 
}
