#include<stdio.h>
#include<math.h>
int soNgTo(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int soFibo(int n){
	int a1=0,a2=1,a=2;
	int b=0;
	while(n>0){
		b+=n%10;
		n/=10;
	}
	while(a<b){
		a=a1+a2;
		a1=a2;
		a2=a;
	}
	if(a==b)
		return 1;
	return 0;		
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m>n){
		int k=m;
		m=n;
		n=k;
	}
	int i;
	for(i=m;i<=n;i++){
		if(soNgTo(i) && soFibo(i))
			printf("%d ",i);
	}
	return 0;
}

