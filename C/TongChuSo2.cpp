#include<stdio.h> 
main() { 
	int i; 
	scanf("%d\n",&i); 
	while (i--) { 
		int n,a=0; 
		scanf("%d",&n); 
		while (n>0) { 
			a+=n%10;
			n/=10; 
		} 
		printf("%d\n",a); 
	} 
}
