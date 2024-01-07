#include<stdio.h>
void nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}

void maxMin(int *arr,int n,int *max,int *min ){
	int i;
	for(i=1;i<=n;i++){
		if((*max)<arr[i])
			*max=arr[i];
		if((*min)>arr[i])
			*min=arr[i];
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	int max=arr[1],min=arr[1];
	maxMin(arr,n,&max,&min);
	printf("%d %d",max,min);
	return 0;
}

