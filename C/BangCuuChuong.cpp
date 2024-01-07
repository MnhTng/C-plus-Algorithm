#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>9)
		return 0;
	else{
		int i;
		for(i=1;i<=10;i++){
			printf("%d ",n*i);
		}
	}	
	return 0;
}

