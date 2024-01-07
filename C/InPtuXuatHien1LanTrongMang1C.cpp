#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktra(int *b, int n,int x){
	int i;
	for(i=1;i<=n;i++){
		if(b[i]==x)
			return i;
	}
	return -1;
}
void in(int *arr, int n){
	int b[100],d[100];
	int i,a=1,c=0;
	for(i=1;i<=n;i++){
		int y=ktra(b,a,arr[i]);
		if(y==-1){
			b[a]=arr[i];
			d[a]=1;
			a++;
		}
		else
			d[y]++;
	}
	for(i=1;i<a;i++){
		if(d[i]==1)
			c++;	
	}
	printf("%d\n",c);
	for(i=1;i<a;i++){
		if(d[i]==1)
			printf("%d ",b[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	if(n<=2 || n>=100)
		return 0;
	else{
		int arr[100];
		nhap(arr,&n);
		in(arr,n);	
	}
	return 0;
}

