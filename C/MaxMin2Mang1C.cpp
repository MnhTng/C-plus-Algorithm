#include<stdio.h>
void nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
void minMax(int *arr, int n, int *max, int *min){
	int i;
	*min=arr[1]; *max=arr[1];
	for(i=1;i<=n;i++){
		if((*max)<arr[i])
			*max=arr[i];
		if((*min)>arr[i])
			*min=arr[i];
	}
}
void minMax2(int *arr, int n, int *max2, int *min2){
	int i,max,min;
	minMax(arr,n,&max,&min);
	*max2=min; *min2=max;
	for(i=1;i<=n;i++){
		if((*max2)<arr[i] && arr[i]!=max)
			*max2=arr[i];
		if((*min2)>arr[i] && arr[i]!=min)
			*min2=arr[i];
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	int min,max,min2,max2;
	minMax2(arr,n,&max2,&min2);
	printf("%d %d",max2,min2);
	return 0;
}

