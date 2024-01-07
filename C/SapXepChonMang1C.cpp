#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktra(int *b, int *n, int x){
	int i;
	for(i=0;i<=*n;i++){
		if(b[i]==x)
			return 0;
	}
	return -1;
}
int tangDan(int *arr, int n){
	int i,j;
	for(i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])
			return 0;
	}
	return 1;
}
void dayTang(int *arr, int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				int t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
			}
		}
	}
}
void sapXep(int *arr, int n){
	int i,m=1,k=0,a=0,b[100],c=0;
	for(i=0;i<n;i++)
		b[i]=-1;
	for(i=0;i<n;i++){
		int y=ktra(b,&c,arr[i]);
		if(y==-1){
			b[c]=arr[i];
			c++;
		}
	}
	dayTang(b,c);
	while(tangDan(arr,n)!=1 || a>=c){
		int i;
		int min=b[a],d;
		for(i=0;i<n;i++){
			if(arr[i]==min){
				int t=arr[i];
				arr[i]=arr[k];
				arr[k]=t;
				k++;
				d=k;
			}
		}
		printf("Buoc %d: ",m);
		m++;
		a++;
		for(i=0;i<n;i++)
			printf("%d ",arr[i]);
		while(arr[d]==b[a]){
			a++;
			k++;
			d=k;
		}
		printf("\n");	
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	nhap(arr,&n);
	sapXep(arr,n);
	return 0;
}

