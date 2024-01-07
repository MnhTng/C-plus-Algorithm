#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
void Max(int *arr, int n, int *max, int *max2, int *min){
	int i;
	for(i=0;i<n;i++){
		if(*min>arr[i])
			*min=arr[i];
		if(*max<arr[i])
			*max=arr[i];	
	}
	*max2=*min;
	for(i=0;i<n;i++){
		if(*max2<arr[i] && arr[i]!=*max)
			*max2=arr[i];
	}
	printf("%d %d",*max,*max2);
}
int main(){
	int n;
	scanf("%d",&n);
	if(n<2 || n>100)
		return 0;
	else{
		int arr[100];
		nhap(arr,&n);
		int max=arr[0],min=arr[0],max2;
		Max(arr,n,&max,&max2,&min);	
	}
	return 0;
}

