#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a=0,i;
	for(i=1;i<n;i++){
		if(n%i==0)
			a+=i;
	}
	if(a==n)
		printf("1");
	else
		printf("0");	
	return 0;
}

