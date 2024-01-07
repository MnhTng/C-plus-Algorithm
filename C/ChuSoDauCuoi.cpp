#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a,b;
	a=n%10;
	while(n>0){
		b=n%10;
		n/=10;
	}
	printf("\n%d %d",b,a);
	return 0;
}

