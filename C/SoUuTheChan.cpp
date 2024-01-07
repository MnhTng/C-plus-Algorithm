#include<stdio.h>
int ktra(long n){
	int a,b=0,c=0;
	while(n>0){
		a=n%10;
		if(a%2==0)
			b++;
		else
			c++;
		n/=10;		
	}
	if(b<=c)
		return 0;
	else
		return 1;	
}
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		long n;
		scanf("%ld",&n);
		if(n%2==0 && ktra(n))
			printf("YES\n");
		else
			printf("NO\n");	
	}
	return 0;
}

