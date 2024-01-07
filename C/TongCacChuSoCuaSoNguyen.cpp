#include<stdio.h>
int main(){
	long n;
	scanf("%ld",&n);
	
	long a=0;
	long m=n;
	int i;
	while(m>0){
		a=m%10;
		i+=a;
		m/=10;
	}
	printf("%d",i);
	return 0;
}

