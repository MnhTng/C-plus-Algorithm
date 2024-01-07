#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int tam[n*n],d=3;
	tam[0]=0,tam[1]=1,tam[2]=1;
	while(d<n*n){
		tam[d]=tam[d-1]+tam[d-2];
		d++;
	}
	int a=0,b=n,c=0,i,j;
	while(a<=b){
		for(i=a;i<b;i++)
			arr[a][i]=tam[c++];
		for(i=a+1;i<b;i++)
			arr[i][b-1]=tam[c++];
		for(i=b-2;i>=a;i--)
			arr[b-1][i]=tam[c++];
		for(i=b-2;i>a;i--)
			arr[i][a]=tam[c++];
		a++;
		b--;				
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		printf("\n");	
	}
	return 0;
}

