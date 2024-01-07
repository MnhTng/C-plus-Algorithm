#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			if(i==1){
				if(j==1 || j==4 || j==7)
					printf("   ");
				else 
					printf(" * ");	
			}
			else if(i==4){
				if(j==1 || j==7)
					printf("   ");
				else
					printf(" * ");	
			}
			else if(i==5){
				if(j==3 || j==4 || j==5)
					printf(" * ");
				else
					printf("   ");
			}
			else if(i==6){
				if(j==4)
					printf(" * ");
				else
					printf("   ");				
			}
			else if(i==7)
				printf("   ");
			else 
				printf(" * ");
		}
		printf("\n");
	}
	return 0;
}

