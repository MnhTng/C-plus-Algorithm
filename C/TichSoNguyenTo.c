#include<stdio.h>
//PT so thanh tich so nguyen to
main(){
	unsigned int n;
	printf("n=",n);
	scanf("%d",&n);
	
	int i=2;
	printf("%d=",n);
	while(n>1){
		if(n%i==0){
			printf("%d",i);
			if(n!=i)
				printf("x");
			n/=i;		
		}
		else{
			i++;
		}
	}
}

