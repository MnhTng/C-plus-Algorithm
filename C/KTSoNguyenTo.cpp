#include<stdio.h>
#include<math.h>
main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int n,m,a=1;
		scanf("%d",&n);
		for(m=2;m<=sqrt(n);m++){
			if(n%m==0)
				a=0;
		}
		if(a==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}

