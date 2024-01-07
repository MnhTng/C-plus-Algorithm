#include<stdio.h>
#include<stdbool.h>
int soChan(int n){
	return n%2==0;
}
int soLe(int n){
	return n%2==1;
}
bool koTang(int n){
	int a=n%10;
	n/=10;
	while(n>0){
		int b=n%10;
		n/=10;
		if(a>b)
			return false;
		else
			a=b;	
	}
	return true;
}
bool koGiam(int n){
	int c=n%10;
	n/=10;
	while(n>0){
		int d=n%10;
		n/=10;
		if(c<d)
			return false;
		else
			c=d;	
	}
	return true;
}
int csChan(int n){
	int tChan=0;
	while(n>0){
		int e=n%10;
		n/=10;
		if(soChan(e))
			tChan+=e;
	}
	return tChan;
}
int csLe(int n){
	int tLe=0;
	while(n>0){
		int f=n%10;
		n/=10;
		if(soLe(f))
			tLe+=f;
	}
	return tLe;
}
int tChanLe(int n){
	if(csChan(n)==csLe(n))
		return n;
}
int main(){
	int i;
	for(i=10000;i<=99999;i++){
		if(soChan(i) && koTang(i))
			printf("%10d",i);
		if(soLe(i) && koGiam(i))
			printf("%10d",i);
		if(tChanLe(i))
			printf("%10d",i);		
	}
	return 0;
}

