#include<stdio.h>
#include<math.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++)
		scanf("%d",&arr[i]);
}
int thuaSo(int n){
	int i=2;
	long long s=0;
	while(i<=sqrt(n)){
		while(n%i==0){
			s+=i;
			n/=i;
		}
		i++;
	}
	if(n!=1)
		s+=n;
	return s;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	nhap(arr,&n);
	int i;
	long long s=0;
	for(i=0;i<n;i++){
		s+=thuaSo(arr[i]);
	}
	printf("%lld",s);
	return 0;
}
