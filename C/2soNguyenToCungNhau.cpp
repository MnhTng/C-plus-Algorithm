#include<stdio.h>
int uoc1(int a,int b){
	int i,j;
	int k=1;
	for(i=1;i<=a || i<=b;i++){
		if(a%i==0 && b%i==0){
			if(k<i)
				k=i;
		}
	}
	if(k!=1)
		return 0;
	return 1;		
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	
	int i,j;
	for(i=m;i<=n;i++){
		for(j=m;j<=n;j++){
			if(i<j){
				if(uoc1(i,j))
					printf("(%d,%d)\n",i,j);
			}			
		}			
	}
	return 0;
}

