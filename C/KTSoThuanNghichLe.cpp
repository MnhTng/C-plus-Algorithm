#include<stdio.h>
int soThNg(long n){
	long i=0,j=n;
	while(n>0){
		i=i*10+n%10;
		n/=10;
	}
	if(i==j)
		return 1;
	else
		return 0;	
}
int csLe(long n){
	int i;
	while(n>0){
		i=n%10;
		n/=10;
		if(i%2==0)
			return 0;
	}
	return 1;
}
int tongLe(long n){
	int i=0;
	while(n>0){
		i+=n%10;
		n/=10;
	}
	if(i%2==0)
		return 0;
	return 1;	
}
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		long n;
		scanf("%ld",&n);
		if(soThNg(n) && csLe(n) && tongLe(n))
			printf("YES\n");
		else
			printf("NO\n");	
	}
	return 0;
}

