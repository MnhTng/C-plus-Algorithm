#include<stdio.h>
#include<math.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktraNgTo(int n){
	int i;
	if(n==0 || n==1)
		return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
void tangDan(int *b, int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=n;j>i;j--){
			if(b[j]<b[j-1]){
				int k=b[j];
				b[j]=b[j-1];
				b[j-1]=k;
			}
		}
	}
}
void dem(int *arr, int n){
	int i,b[100],a=0;
	for(i=1;i<=n;i++){
		if(ktraNgTo(arr[i]))
			b[++a]=arr[i];
	}
	tangDan(b,a);
	int j=1;
	while(j<=a){
		int k=j,c=0;
		for(i=j;i<=a;i++){
			if(b[i]==b[k])
				c++;
		}
		printf("%d xuat hien %d lan\n",b[k],c);
		j+=c;
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

