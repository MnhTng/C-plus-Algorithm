#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	
	int m,n=0;
	if(a<b){
		for(m=a;m<=b;m++){
			n+=m;
		}
		printf("%d\n",n);	
	}
	else{
		int c=a;
		a=b;
		b=c;
		for(m=a;m<=b;m++){
			n+=m;
		}
		printf("%d\n",n);
	}
	
	return 0;
}

