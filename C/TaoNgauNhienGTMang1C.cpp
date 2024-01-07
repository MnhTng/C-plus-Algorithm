#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int ktra(int *arr, int n, int x){
	int i;
	for(i=1;i<=n;i++){
		if(arr[i]==x)
			return 0;
	}
	return 1;
}
int main(){
	srand(time(NULL));
	int n;
	scanf("%d",&n);
	int arr[100];
	
	int i=1;
	while(i<=n){
		int x=rand();
		if(ktra(arr,i,x)){
			arr[i]=x;
			i++;
		}
	}
	for(i=1;i<=n;i++){
		printf("%10d",arr[i]);
	}
	return 0;
}

