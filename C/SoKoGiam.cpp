#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		long n;
		scanf("%ld",&n);
		
		int a=n%10;
		int b;
		n/=10;
		while(n>10){
			b=n%10;
			if(a>=b)
				a=b;
			else{
				printf("\nNO");
				break;
			}
			n/=10;	
		}
		b=n%10;
		if(a>=b)
			printf("\nYES");
	}
	return 0;
}

