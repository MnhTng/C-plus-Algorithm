#include<stdio.h>
#include<math.h>
long thuaSo(long n){
	int i=2;
	long s=0;
	while(i<=sqrt(n)){
		while(n%i==0){
			n/=i;
			s=i;
		}
		i++;
	}
	if(n!=1)
		s=n;
	return s;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long n;
		scanf("%ld",&n);
		long s=thuaSo(n);
		printf("%ld\n",s);
	}
	return 0;
}

