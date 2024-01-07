#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,c=0;
		scanf("%d",&n);
		int i;
		for(i=1;i<=n/i;i++){
			if(n%i==0){
				if(i%2==0)
					c++;
				if((n/i)%2==0)
					c++;
				if((n/i)==i && i%2==0)
					c--;	
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
