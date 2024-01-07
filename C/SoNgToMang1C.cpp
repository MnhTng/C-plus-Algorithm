#include<stdio.h>
#include<math.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktra(int n){
	int i;
	if(n==0 || n==1)
		return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)	
			return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n>100)
			return 0;
		else{
			int arr[100];
			nhap(arr,&n);
			int i;
			for(i=1;i<=n;i++){
				if(ktra(arr[i]))	
					printf("%d ",arr[i]);
			}
		}
		printf("\n");	
	}
	return 0;
}

