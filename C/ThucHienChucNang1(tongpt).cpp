#include<stdio.h>
int nhap(int n){
	scanf("%d",&n);
	return n;
}
int tongChuSo(int n){
	int a=0;
	while(n>0){
		a+=n%10;
		n/=10;
	}
	return a;
}
void ptThuaSo(int n){
	int i=2;
	while(i<=n){
		if(n%i==0){
			printf("%d",i);
			n/=i;
			if(n>i)
				printf("*");
		}
		else
			i++;
	}
}
int main(){
	int n;
	n=nhap(n);
	
	int a=tongChuSo(n);
	printf("%d\n",a);
	
	ptThuaSo(n);
	return 0;
}

