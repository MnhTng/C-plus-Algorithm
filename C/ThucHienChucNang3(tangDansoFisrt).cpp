#include<stdio.h>
#include<stdbool.h>
int nhap(int n){
	scanf("%d",&n);
	return n;
}
bool ktTangDan(int n){
	int a,b;
	a=n%10;
	while(n>0){
		b=n%10;
		n/=10;
		if(b>a)
			return false;
		else 
			a=b;			
	}
	return true;
}
int soDauTien(int n){
	int a=0;
	while(n>0){
		a=n%10;
		n/=10;
	}
	return a;
}
void soDauXuatHien(int n){
	int i=soDauTien(n);
	int j=0;
	while(n>0){
		int b=0;
		b=n%10;
		n/=10;
		if(b==i)
			j++;
	}
	printf("\n%d",j);
}
int main(){
	int n;
	n=nhap(n);
	
	if(ktTangDan(n))
		printf("\nTANG DAN");
	else
		printf("\nKO TANG DAN");	
	
	printf("\n%d",soDauTien(n));
	soDauXuatHien(n);
	return 0;
}

