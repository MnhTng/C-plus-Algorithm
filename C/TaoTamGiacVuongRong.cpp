#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i==n)
				printf("*");
			else if(j==1 || j==i)	
				printf("*");
			else
				printf(".");	
		}
		printf("\n");
	}
	return 0;
}

