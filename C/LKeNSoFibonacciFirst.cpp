#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int m=2;
	int a1=0,a2=1,a;
	printf("0 1 ");
	while(1){
		a=a1+a2;
		a1=a2;
		a2=a;
		printf("%d ",a);
		m++;
		if(m==n)
			break;
	}
	return 0;
}

