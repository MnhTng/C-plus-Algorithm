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
	
	int i,j=0;
	float a=0;
	for(i=0;i<=n;i++){
		a+=(float)arr[i]*pow(x,j);
		j++;
	}
	printf("%.2f",a);
	return 0;
}

