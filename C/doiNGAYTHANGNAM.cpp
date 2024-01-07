#include<stdio.h>
int main(){
	int n,d,w,y;
	scanf("%d",&n);
	y=n/365;
	w=(n%365)/7;
	d=(n%365)%7;
	printf("%d\t%d\t%d",y,w,d);
	return 0;
}

