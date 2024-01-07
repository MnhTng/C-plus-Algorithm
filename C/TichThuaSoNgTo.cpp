#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i=2,s=1;
		while(n>1){
			int a=0;
			if(n%i==0){
				while(n%i==0)
					n/=i;
				a=1;
			}
			if(a==1){
				s*=i;
				i++;
			}
			else
				i++;			
		}
		printf("%d\n",s);
	}
	return 0;
}

