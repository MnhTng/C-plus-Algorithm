#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int a,b,n,m=1;
		scanf("%d%d",&a,&b);
		for(n=1;n<=a || n<=b;n++){
			if(a%n==0 && b%n==0){
				if(m<n)
					m=n;
			}
		}
		printf("%d\n",m);
	}
	return 0;
}

