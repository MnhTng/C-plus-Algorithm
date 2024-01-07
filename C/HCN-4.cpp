#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	
	int i;
	int j=(m>n)?m:n;
	int k=j;
	int a=n;
	for(i=1;i<2;i++){
		for(j;j>0 && a>0;j--){
			printf("%d",j);
			a--;
		}
		printf("\n");
	}
	int l;
	for(i=1;i<m;i++){
		int l=k-i;
		int b=n;
		for(l;l>0 && b>0;l--){
			printf("%d",l);
			b--;
			if(l==1){
				int h;
				for(h=2;b>0;h++){
					printf("%d",h);
					b--;
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}

