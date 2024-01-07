#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n;j++){
			if(n-j>=i)
				printf("~");
			else if(2*n-i<j)
				printf(" ");
			else
				printf("*");	
		}
		printf("\n");
	}
	return 0;
}

