#include<stdio.h>
#include<math.h>
int soThNg(int n){
	int i=0,j=n;
	while(j>0){
		i=i*10+j%10;
		j/=10;
	}
	if(i!=n)
		return 0;
	else
		return 1;	
}
int sum(int n){
	int i=0;
	while(n>0){
		i+=n%10;
		n/=10;
	}
	if(i%10!=0)
		return 0;
	else
		return 1;	
}
int khac4(int n){
	int i;
	while(n>0){
		i=n%10;
		n/=10;
		if(i==4)
			return 0;
	}
	return 1;
}
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int n;
		scanf("%d",&n);
		if(1<n<7){
			int x=pow(10,n-1),y=pow(10,n),z;
			for(z=x;z<y;z++){
				if(soThNg(z) && sum(z) && khac4(z))
					printf("%d ",z);
			}
		}
		printf("\n");	
	}
	return 0;
}

