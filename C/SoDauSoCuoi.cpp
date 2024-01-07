#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int n,a,b;
		scanf("%d",&n);
		if(n<10)
			return 0;
		else{
			a=n%10;
			while(n>0){
				b=n%10;
				n/=10;
			}
			if(a==b)
				printf("YES\n");
			else
				printf("NO\n");
		}	
			
	}
	return 0;
}

