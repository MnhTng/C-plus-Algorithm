#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktra(int *b, int *n, int x){
	int i;
	for(i=1;i<=*n;i++){
		if(b[i]==x)
			return i;
	}
	return -1;
}
void dem(int *arr, int n){
	int b[100],d[100],c=1;
	int i;
	for(i=1;i<=n;i++)
		b[i]=-1;
	for(i=1;i<=n;i++){
		int y=ktra(b,&c,arr[i]);
		if(y==-1){
			b[c]=arr[i];
			d[c]=1;
			c++;
		}
		else
			d[y]++;
	}
	for(i=1;i<c;i++){
		printf("%d xuat hien %d lan\n",b[i],d[i]);
	}
}
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		int arr[100];
		nhap(arr,&n);
		printf("Test %d:\n",i);
		dem(arr,n);
		printf("\n");
	}
	return 0;
}


