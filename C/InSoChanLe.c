#include<stdio.h>
//So chan va le < n
main(){
	unsigned int n;
	printf("n=",n);
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		if(i%2==0){
			printf("\n So chan=%d",i);
		}
	}
	for(i=0;i<n;i++){
		if(i%2==1){
			printf("\n So le=%d",i);
		}
	}
}

