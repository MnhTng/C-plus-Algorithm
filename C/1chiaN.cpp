#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while(i>0){
		int n;
		scanf("%d",&n);
		printf("\n%.15f",(double)1/n);
		i--;
	}
	return 0;
}

