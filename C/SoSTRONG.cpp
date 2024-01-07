#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a,i,c=0,d=n;
	while(n>0){
		int b=1;
		a=n%10;
		n/=10;
		for(i=1;i<=a;i++){
			b*=i;
		}
		c+=b;
	}
	if(c==d)
		printf("1");
	else
		printf("0");	
	return 0;
}

