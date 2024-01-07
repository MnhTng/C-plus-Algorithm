#include<stdio.h>
int demSoLe(int n){
	int a,i=0;
	while(n>0){
		a=n%10;
		n/=10;
		if(a%2==1)
			i++;
	}
	return i;
}
int demSoChan(int n){
	int a,i=0;
	while(n>0){
		a=n%10;
		n/=10;
		if(a%2==0)
			i++;
	}
	return i;
}
int main(){
	int n;
	scanf("%d",&n);
	
	if(n==0)
		return 0;
	else{
		int a=demSoLe(n),b=demSoChan(n);
		printf("%d %d",a,b);
	}	
	return 0;
}

