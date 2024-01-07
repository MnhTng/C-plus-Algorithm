#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&n,&m);
	
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(i==1 || i==m)
				printf("*");
			else{
				if(j==1 || j==n)
					printf("*");
				else
					printf(" ");	
			}	
				
		}
		printf("\n");
	}
	return 0;
}

