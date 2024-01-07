#include<stdio.h>
int tongCs(int n){
	int i=0;
	while(n>0){
		i+=n%10;
		n/=10;
	}
	return i;
}
int tongGThua(int n){
	int a=0,b=2;
	while(n>1){
		if(n%b==0){
			if(b<10){
				a+=b;
				n/=b;
			}
			else{
				int i=0,j=b;
				while(j>0){
					i+=j%10;
					j/=10;
				}
				a+=i;
				n/=b;
			}
		}
		else
			b++;
	}
	return a;
}
int main(){
	int n;
	scanf("%d",&n);
	if(tongCs(n)==tongGThua(n))
		printf("\nYES");
	else
		printf("\nNO");	
	return 0;
}

