#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int i=1;
	while(n>0){
		i*=n%10;
		n/=10;
	}
	printf("%d\n",i);
	return 0;
}

