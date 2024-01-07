#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[100][100];
	int a=0,b=n,c=1;
	int i,j;
	while(a<=b){
		for(i=a;i<b;i++)
			arr[a][i]=c++;
		for(i=a+1;i<b;i++)
			arr[i][b-1]=c++;
		for(i=b-2;i>=a;i--)
			arr[b-1][i]=c++;
		for(i=b-2;i>a;i--)
			arr[i][a]=c++;
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

