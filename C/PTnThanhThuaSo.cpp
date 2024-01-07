#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
//	int c=1;
	while(i--){
		int n,a=2;
		scanf("%d",&n);
		printf("%d = ",n);
		while(n>1){
			int b=0;
			if(n%a==0){
				while(n%a==0){
					b++;
					n/=a;
				}
				printf("%d^%d ",a,b);
				if(n>1)
					printf("* ");		
			}
			else
				a++;
		}
//		c++;
		printf("\n");
	}
	return 0;
}

