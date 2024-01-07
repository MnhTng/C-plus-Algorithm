#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktra(int *b, int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(b[i]==x)
			return i;
	}
	return -1;
}
void in(int *arr, int n){
	int b[100],d[100];
	int i,a=0,c=0;
	for(i=0;i<n;i++){
		int y=ktra(b,a,arr[i]);
		if(y==-1){
			b[a]=arr[i];
			d[a]=1;
			a++;
		}
		else
			d[y]++;
	}
	for(i=0;i<a;i++){
		if(d[i]>=2)
			c++;
	}
	printf("%d\n",c);		
	for(i=0;i<a;i++){
		if(d[i]>=2)
			printf("%d ",b[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	in(arr,n);
	return 0;
}

