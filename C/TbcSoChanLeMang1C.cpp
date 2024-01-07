#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
void tbc(int *arr, int n, float *x, float *y){
	int i,a=0,b=0,c=0,d=0;
	for(i=1;i<=n;i++){
		if(arr[i]%2==0){
			a+=arr[i];
			b++;
		}
		else{
			c+=arr[i];
			d++;
		}
	}
	*x=(float)a/b; 
	*y=(float)c/d;
}
void xuat(float x, float y){
	printf("%.2f %.2f",x,y);
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	float x,y;
	tbc(arr,n,&x,&y);
	xuat(x,y);
	return 0;
}

