#include<stdio.h>
int soStrong(int n){
	int b=0,i;
	int x,y=n;
	while(n>0){
		int a=1;
		x=n%10;
		n/=10;
		for(i=1;i<=x;i++){
			a*=i;
		}
		b+=a;
	}
	if(b==y)
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
		if(soStrong(i))
			printf("%d ",i);
	}
	return 0;
}

