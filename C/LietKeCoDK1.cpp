#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool ktNgTo(int n){
	int a;
	for(a=2;a<=sqrt(n);a++){
		if(n%a==0)
			return false;
	}
	return true;
}
bool csNgTo(int n){
	int b;
	while(n>0){
		b=n%10;
		n/=10;
		if(!ktNgTo(b))
			return false;
	}
	return true;
}
bool tongCsNgTo(int n){
	int c=0;
	while(n>0){
		c+=n%10;
		n/=10;
	}
	if(ktNgTo(c))
		return true;
	return false;	
}
int main(){
	int i;
	for(i=20000000;i<=77777777;i++){
		if(csNgTo(i) && tongCsNgTo(i) && ktNgTo(i))
			printf(" %d ",i);
	}
	return 0;
}

