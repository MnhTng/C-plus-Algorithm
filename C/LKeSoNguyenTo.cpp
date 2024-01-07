#include<stdio.h>
#include<math.h>
int ktra(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=2;i<=n;i++){
		if(ktra(i))
			printf("%d\n",i);
	}
	return 0;
}

