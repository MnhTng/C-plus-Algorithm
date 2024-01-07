#include<stdio.h>
int main(){
	int a,b,c,min,min1;
	scanf("%d%d%d",&a,&b,&c);
	min1=(a<b)?a:b;
	min=(min1<c)?min1:c;
	printf("%d",min);
	return 0;
}

