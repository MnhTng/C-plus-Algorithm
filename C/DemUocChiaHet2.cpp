#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int n;
		scanf("%d",&n);
		int a=0,i=1;
		while(i<=n/i){
			if(n%i==0){
				if(i%2==0)
					a++;
				if((n/i)%2==0)
					a++;
				if(n/i==i && i%2==0)
					a--;
			}
			i++;			
		}
		printf("%d",a);
		printf("\n");
	}
	return 0;
}

