#include<stdio.h>
#include<math.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	float x;
	scanf("%f",&x);
	
	int i,j=1;
	float a=0;
	for(i=1;i<=n;i++){
		a+=arr[i]*j*pow(x,j-1);
		j++;
	}
	printf("%.2f",a);
	return 0;
}

