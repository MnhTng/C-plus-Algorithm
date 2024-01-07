#include<stdio.h>
int arr[100];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		do{
			scanf("%d",&n);
		}
		while(n<2||n>50);
		int i;
		for(i=1;i<n;i++){
			scanf("%d",&arr[i]);
		}
		int kt=1;
		int dem=1;
		for(i=1;i<n;i++){
			int j;
			for(j=0;j<i;j++){
				if(arr[i]<arr[j])
					kt=0;
			}
			if(kt==1)
				dem++;
			else
				kt=1;
		}
		printf("%d\n",dem);
	} 
}
