#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=m+n;j++){
			if(i-j>0)
				printf("~");
			else if(j>=n+i)
				printf(" ");
			else
				printf("*");		
		}
		printf("\n");
	}
	return 0;
}

