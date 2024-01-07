#include<stdio.h>
#include<math.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktraNgTo(int n){
	int i;
	if(n==0 || n==1)
		return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
void dem(int *arr, int n){
	int i,a=0;
	for(i=1;i<=n;i++){
		if(ktraNgTo(arr[i]))
			a++;
	}
	printf("%d ",a);
	for(i=1;i<=n;i++){
		if(ktraNgTo(arr[i]))
			printf("%d ",arr[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	dem(arr,n);
	return 0;
}

