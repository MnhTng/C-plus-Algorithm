#include<stdio.h>
#include<math.h>
int nhap(int n){
	scanf("%d",&n);
	return n;
}
void lietKeUoc(int n){
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0)
			printf("%3d",i);
	}
}
void demUoc(int n){
	int a=0,i;
	for(i=1;i<=n;i++){
		if(n%i==0)
			a++;;
	}
	printf("\n%3d\n",a);
}
void lkUocNgTo(int n){
	int i,j;
	for(i=2;i<=n;i++){
		if(n%i==0){
			int a=1;
			for(j=2;j<=sqrt(i);j++){
				if(i%j==0){
					a=0;
					break;
				}			
			}
			if(a==1)
				printf("%3d",i);
		}
	}
}
int main(){
	int n=nhap(n);
	
	lietKeUoc(n);
	demUoc(n);
	lkUocNgTo(n);
	return 0;
}

