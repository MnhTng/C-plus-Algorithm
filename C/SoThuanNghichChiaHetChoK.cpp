#include<stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	
	int i;
	for(i=10000000;i<=99999999;i++){
		int b=i;
		int a=0;
		while(b>0){
			a=a*10+b%10;
			b/=10;
		}
		if(a==i && a%k==0)
			printf("%10d",i);
	}	
	return 0;
}

