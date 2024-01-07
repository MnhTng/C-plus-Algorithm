#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	if(n==0)
		printf("n!=1");
	else{
		int i;
		long a;
		for(i=1;i<=n;i++){
			a*=i;
		}
		printf("n!=%ld",a);
	}	
	return 0;
}

