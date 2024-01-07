#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int m=2;
	int a=0;
	while(1){
		int b=1;
		int i;
		for(i=2;i<=sqrt(m);i++){
			if(m%i==0){
				b=0;
				break;
			}
		}
		if(b!=0){
			a++;
			printf("%d\n",m);
		}
		if(a>=n){
			break;
		}
	
		m++;	
	}
	return 0;
}

