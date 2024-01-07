#include<stdio.h>
int soChan(long int n){
	return n%2==0;
}
int csChan(long int n){
	int i;
	while(n>0){
		i=n%10;
		n/=10;
		if(i%2==1){
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		long int n;
		scanf("%ld",&n);
		if(soChan(n) && csChan(n))
			printf("\nYES");
		else
			printf("\nNO");	
	}
	return 0;
}

