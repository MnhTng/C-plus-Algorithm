#include<stdio.h> 
#include<math.h> 
int main(){ 
	int m,n ; 
	scanf("%d%d",&m,&n); 
	
	int a=sqrt(m); 
	a=(a*a==a)?a:a+1; 
	int b=sqrt(n); 
	int i; 
	printf("%d",b-a+1); 
	for(i=a;i<=b;i++){ 
		printf("\n%d",i*i); 
	} 
	return 0 ; 
}

