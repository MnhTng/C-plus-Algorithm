#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a>=c || b>=d)
			return 0;
		else{
			int x=c-a;
			int y=d-b;
			if(x==y)
				printf("\nYES");
			else
				printf("\nNO");	
		}		
	}
	return 0;
}

