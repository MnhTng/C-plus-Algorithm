#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a1=1,a2=1;
	if(n==1 || n==2)
		return 1;
	int a,i;
	for(i=3;i<=n;i++){
		a=a1+a2;
		a1=a2;
		a2=a;
	}
	printf("%d",a);
	return 0;
}

