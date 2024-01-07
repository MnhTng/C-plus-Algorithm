#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	
	int i,j;
	for(i=1;i<2;i++){
		for(j=1;j<=n;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=2;i<=m;i++){
		int b=n;
		for(j=i;j>0 && i<=n;j--){
			printf("%d",j);
			b--;
		}
		if(i>n){
			int a=n;
			printf("%d",i);
			for(j=(i-1);(a-1)>0;j--){
				printf("%d",j);
				a--;
			}
		}
		else{
			for(j=2;b>0;j++){
				printf("%d",j);
				b--;
			}
		}
		printf("\n");
	}
	return 0;
}

