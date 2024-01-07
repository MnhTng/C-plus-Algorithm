#include<stdio.h> 
main(){ 
	int m,n; 
	scanf("%d%d",&m,&n); 
	
	int i,j; 
	for(i=1;i<=m;i++){ 
		for(j=i;j<=n;j++){ 
			printf("%d",j); 
		} 
		if(i>n){ 
			printf("%d",i); 
			for(j=(n-1);j>0;j--){ 
				printf("%d",j); 
			}
		}	
		else{ 
			for(j=(i-1);j>0;j--){ 
				printf("%d",j); 
			} 
		} 
		printf("\n"); 
	} 
}
