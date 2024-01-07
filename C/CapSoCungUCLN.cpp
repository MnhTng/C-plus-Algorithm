#include<stdio.h>
int ucln(int a, int b){
	int m=1,n;
	for(n=1;n<=a || n<=b;n++){
		if(a%n==0 && b%n==0){
			if(m<n)
				m=n;
		}
	}
	return m;
}
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int x=ucln(a,b);
		int y=ucln(c,d);
		if(x==y)
			printf("\nYES");
		else
			printf("\nNO");	
	}
	return 0;
}

