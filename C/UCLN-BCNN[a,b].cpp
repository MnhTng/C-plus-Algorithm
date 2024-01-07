#include<stdio.h>
int main(){ 
 	int i;
	scanf("%d",&i);
	while(i--){
		int S,a,b; 
		scanf("%ld%ld",&a,&b); 
		S=a*b; 
		while(a!=b){ 
			if(a>b){ 
				a=a-b; 
			}
			else{ 
				b=b-a; 
			} 
		} 
		printf("%d %d",S/a,a);
		printf("\n"); 
	}
	return 0; 
}
