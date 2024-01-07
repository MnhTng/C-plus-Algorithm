#include<stdio.h>
int ktra(int n){
	int a1=1,a2=1;
	int a=0;
	if(n==1 || n==2)
		return 1;
	else{
		while(a<n){
			a=a1+a2;
			a1=a2;
			a2=a;
		}
		if(a==n)
			return 1;
	}
	return 0;	
}
int main(){
	int n;
	scanf("%d",&n);
	if(ktra(n))
		printf("1");
	else
		printf("0");	
	return 0;
}

