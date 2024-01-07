#include<stdio.h>
int nhap(int n){
	scanf("%d",&n);
	if(n<=0)
		return 0;
	return n;	
}
void dem(int n){
	int i=0;
	while(n>0){
		int a=0;
		a=n%10;
		n/=10;
		i++;
	}
	printf("%d\n",i);
}
void demSoLe(int n){
	int i=0;
	while(n>0){
		int a=0;
		a=n%10;
		n/=10;
		if(a%2==1)
			i++;
	}
	printf("%d\n",i);
}
void tbCong(int n){
	int a=0,i=0;
	while(n>0){
		a+=n%10;
		n/=10;
		i++;
	}
	printf("%.2f\n",(float)a/i);
}
int main(){
	int n;
	n=nhap(n);
	
	dem(n);
	demSoLe(n);
	tbCong(n);
	return 0;
}

