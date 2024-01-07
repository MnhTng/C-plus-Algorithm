#include<stdio.h>
int main(){
	long n;
	scanf("%ld",&n);
	
	long i=0;
	long m=n;
	while(m>0){
		i=i*10+m%10;
		m/=10;
	}
	if(i==n)
		printf("%ld la so thuan nghich",n);
	else
		printf("%ld khong la so thuan nghich",n);
	return 0;
}

