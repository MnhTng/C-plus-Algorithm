#include<stdio.h>
#include<math.h>
//Tao tam giac can so
main(){
	unsigned int h;
	printf("h=",h);
	scanf("%d",&h);
	
	int i,j;
	for(i=1;i<=h;i++){
		for(j=1;j<2*h;j++){
			if(abs(h-j)<=(i-1))
				printf("%d ",i-abs(h-j));
			else
				printf("  ");
		}
		printf("\n");
	}

}

