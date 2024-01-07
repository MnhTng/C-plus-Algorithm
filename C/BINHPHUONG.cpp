#include<stdio.h>
int main(){
	int i,j;
	scanf("%d",&i);
	for(j=1;j<=i;j++){
		long n;
		scanf("%ld",&n);
		printf("%ld",n*n);
		printf("\n");
	}
	return 0;
}

