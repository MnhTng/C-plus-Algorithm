#include<stdio.h>
int nhap(int *arr,int *n){
	int i; 
	for(i=1;i<=*n;i++) 
		scanf("%d",&arr[i]); 
}
void Min(int *arr, int n, int *min, int *min2, int *max){
	int i;
	for(i=1;i<=n;i++){
		if(*min>arr[i])
			*min=arr[i];
		if(*max<arr[i])
			*max=arr[i];	
	}
	*min2=*max;
	for(i=1;i<=n;i++){
		if(*min2>arr[i] && arr[i]!=*min)
			*min2=arr[i];
	}
	printf("%d %d",*min,*min2);
}
int main(){
	int n;
	scanf("%d",&n);
	if(n<2 || n>100)
		return 0;
	else{
		int arr[100];
		nhap(arr,&n);
		int min=arr[1],max=arr[1],min2;
		Min(arr,n,&min,&min2,&max);	
	}
	return 0;
}

