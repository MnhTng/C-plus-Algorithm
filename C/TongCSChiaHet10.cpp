#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int n;
		scanf("%d",&n);
		int a=0;
		while(n>0){
			a+=n%10;
			n/=10;
		}
		if(a%10==0)
			printf("\nYES");
		else
			printf("\nNO");	
	}
	return 0;
}

