#include<stdio.h>
#include<math.h>
int soNgTo(int n){
	if(n==0 || n==1)
		return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int csNgTo(int n){
	int s=0,i;
	while(n>0){
		i=n%10;
		s+=i;
		n/=10;
	}
	if(soNgTo(s))
		return 1;
	else
		return 0;	
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j=0;
	for(i=pow(10,n-1);i<pow(10,n);i++){
		if(soNgTo(i) && csNgTo(i)){
			printf("%d ",i);
			j++;
		}
	}
	if(j==0)
		printf("0");
	return 0;
}

