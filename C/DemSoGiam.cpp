#include<stdio.h>
int soGiam(int n){
	int i=n%10,j;
	n/=10;
	while(n>0){
		j=n%10;
		n/=10;
		if(i<j)
			i=j;
		else
			return 0;	
	}
	return 1;
}
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int a,b;
		scanf("%d%d",&a,&b);
		int m=0,n;
		for(n=a;n<=b;n++){
			if(soGiam(n))
				m++;
		}
		printf("%d\n",m);
	}
	return 0;
}

