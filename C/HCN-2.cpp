#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	
	int i,j;
	for(i=1;i<=m;i++){
		int b=n;
		for(j=i;j<=n;j++){
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
			for(j=(n-1);b>0;j--){
				printf("%d",j);
				b--;
			}
		}
		printf("\n");
	}
	return 0;
}

