#include<stdio.h>
#include<math.h>
int nhap(int n){
	scanf("%d",&n);
	return n;
}
void soNgTo(int n){
	int a=0;
	int m=2;
	while(1){
		int i,b=1;
		for(i=2;i<=sqrt(m);i++){
			if(m%i==0){
				b=0;
				break;
			}
		}
		if(b==1){
			a++;
			printf(" %d ",m);
		}
		if(a>n)
			break;
		m++;	
	}
}
void soFibonacci(int n){
	int a1=1,a2=1;
	int a=0,b=0;
	while(1){
		a=a1+a2;
		printf(" %d ",a);
		a1=a2;
		a2=a;
		b++;
		if(b>n)
			break;
	}
}
void soChinhPhg(int n){
	int a=0,m=1;
	while(1){
		float i;
		i=sqrt(m);
		if(i==(int)i){
			printf(" %d ",m);
			a++;
		}
		if(a>n)
			break;
		m++;	
	}
}
int main(){
	int n=nhap(n);
	
	soNgTo(n);
	printf("\n");
	soFibonacci(n);
	printf("\n");
	soChinhPhg(n);
	return 0;
}

