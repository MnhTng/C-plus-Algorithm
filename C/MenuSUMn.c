#include<stdio.h>
//Lam menu ve n
main(){
	int choose;
	printf("\n1. Tong cac so <=n"
		"\n2. Tong cac so le <=n"
		"\n3. Tong cac so chan <=n"
		"\n LET'S CHOOSE!\n");
	scanf("%d",&choose);
	
	switch(choose){
		case 1:{
			unsigned int n;
			printf("n=",n);
			scanf("%d",&n);
			int a,i;
			for(i=0;i<=n;i++){
				a+=i;
			}
			printf("Sum1=%d",a);
			break;
		}
		
		case 2:{
			unsigned int n;
			printf("n=",n);
			scanf("%d",&n);
			int a,i;
			for(i=0;i<=n;i++){
				if(i%2==1){
					a+=i;
					continue;
				}
			}
			printf("Sum2=%d",a);
			break;
		}
		
		case 3:{
			unsigned int n;
			printf("n=",n);
			scanf("%d",&n);
			int a,i;
			for(i=0;i<=n;i++){
				if(i%2==0){
					a+=i;
					continue;
				}
			}
			printf("Sum3=%d",a);
			break;
		}
	}
	printf("XONG!");
	
}

