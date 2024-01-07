#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a=n%10,b,c=10,d=0;
	n/=10;
	while(n>10){
		b=n%10;
		d+=(n%10)*(c/10);
		c*=10;
		n/=10;
	}
	b=n%10;
	printf("%d\n",a*c+d*10+b);
	return 0;
}
/*12345=>a=5=>n=1234
	b=4;d=4*1+0=4;c=100;n=123
	b=3;d=3*10+4=34;c=1000;n=12
	b=2;d=2*100+34=234;c=10000;n=1
	b=1
*/
