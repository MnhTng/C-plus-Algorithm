#include<stdio.h>
#include<math.h>
int ktra1(int n){
	int i;
	if(n==0 || n==1)
		return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int ktra2(int n){
	int m;
	while(n>0){
		m=n%10;
		n/=10;
		if(!ktra1(m))
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
		if(a>=b)
			return 0;
		else{
			int m=0,n;
			for(n=a;n<=b;n++){
				if(ktra1(n) && ktra2(n))
					m++;
			}
			printf("%d",m);	
		}	
		printf("\n");
	}
	return 0;
}

