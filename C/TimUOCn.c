#include<stdio.h>
//Liet ke cac uoc cua n
main(){
	unsigned int n;
	printf("n=",n);
	scanf("%d",&n);
	
	int a,i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			a++;
		}
	}
	printf("Uoc cua n:%d",a);
}

