#include<stdio.h>
#include<stdbool.h>
bool soThuanNghich(int n){
	int a=0;
	int m=n;
	while(n>0){
		a=a*10+n%10;
		n/=10;
	}
	if(a==m)
		return true;
	return false;	
}
bool koCo6(int n){
	int b=0;
	while(n>0){
		b=n%10;
		n/=10;
		if(b==6)
			return false;
	}
	return true;
}
bool tongCsChia6(int n){
	int c=0;
	while(n>0){
		c+=n%10;
		n/=10;
	}
	if(c%6==0)
		return true;
	return false;	
}
int main(){
	int i;
	for(i=10000000;i<=99999999;i++){
		if(soThuanNghich(i) && koCo6(i) && tongCsChia6(i))
			printf(" %d ",i);
	}
	return 0;
}

