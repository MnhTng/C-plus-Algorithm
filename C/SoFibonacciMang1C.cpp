#include<stdio.h>
long long sum(int n){
	if(n==1 || n==2)
		return 1;
	int i;
	long long arr[100];
	arr[1]=1,arr[2]=1;		
	for(i=3;i<=n;i++){
		arr[i]=arr[i-2]+arr[i-1];
	}	
	return arr[n];
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",sum(n));	
	}
	return 0;
}

