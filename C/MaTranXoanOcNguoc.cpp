#include<stdio.h>
int main(){
	int t,d=1;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n][n];
		printf("Test %d:\n",d++);
		int a=0,b=n,c=n*n,i,j;
		while(a<=b){
			for(i=a;i<b;i++)
				arr[a][i]=c--;
			for(i=a+1;i<b;i++)
				arr[i][b-1]=c--;
			for(i=b-2;i>=a;i--)
				arr[b-1][i]=c--;
			for(i=b-2;i>a;i--)
				arr[i][a]=c--;
			a++;
			b--;				
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				printf("%d ",arr[i][j]);
			printf("\n");	
		}
		printf("\n");
	}
	return 0;
}


