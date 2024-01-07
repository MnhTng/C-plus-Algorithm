#include<stdio.h>
#include<math.h>
int SoNgTo(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int SoThuanNghich(int n){
	int a=0;
	int b=n;
	while(n>0){
		a=a*10+n%10;
		n/=10;
	}
	if(a!=b)
		return 0;
	return 1;	
}
int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		int a,b,c=0;
		scanf("%d%d",&a,&b);
		
		int i;
		for(i=a;i<=b;i++){
			if(SoNgTo(i) && SoThuanNghich(i)){
				printf("%d ",i);
				c++;
			}
			if(c==10){
				printf("\n");
				c=0;
			}
		}
		printf("\n\n");
	}
	return 0;
}

