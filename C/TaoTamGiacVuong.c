#include<stdio.h>
//Tao tam giac vuong
main(){
	unsigned int h;
	scanf("%d",&h);
	
	int i,j;
	for(i=1;i<=h;i++){
		for(j=1;j<=i;j++){
			printf("*",j);
		}
		printf("\n");
	}

}

