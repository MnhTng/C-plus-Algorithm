#include<stdio.h>
int nhap(int *arr, int *n){
	int i;
	for(i=1;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n>100)
			return 0;
		else{
			int arr[100];
			nhap(arr,&n);
			int i;
			for(i=1;i<=n;i++){
				if(arr[i]%2==0)
					printf("%d ",arr[i]);
			}	
		}
		printf("\n");	
	}
	return 0;
}

