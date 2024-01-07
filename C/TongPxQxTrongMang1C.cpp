#include<stdio.h>
#include<math.h>
int ktao(int *arr, int n){
	int i;
	for(i=0;i<=n;i++){
		arr[i]=0;
	}
}
int nhap(int *arr, int *n){
	int i;
	for(i=0;i<=*n;i++){
		scanf("%d",&arr[i]);
	}
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int p[100],q[100],s[100];
	ktao(p,100);
	ktao(q,100);
	nhap(p,&m);
	nhap(q,&n);
	
	int k=(m>n)?m:n;
	int i;
	for(i=0;i<=k;i++){
		s[i]=p[i]+q[i];
	}
	for(i=k;i>=0;i--){
		printf("%dx^%d",s[i],i);
		if(i>0 && s[i-1]>0)
			printf(" +");
		else if(s[i-1]<0)
			printf(" ");	
	}
	return 0;
}

