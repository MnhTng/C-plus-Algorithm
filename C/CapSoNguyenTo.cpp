#include<stdio.h>
#include<math.h>
int ngTo(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j;
		for(i=2;i<=n/2;i++){
			if(ngTo(i)){
				if(ngTo(n-i))
					printf("%d %d ",i,n-i);
			}
		}
		printf("\n");
	}
	return 0;
}

