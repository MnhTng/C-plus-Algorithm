#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	
	if(a>=b)
		return 0;
	else{
		int i=a,j;
		while(1){
			int m=0;
			for(j=1;j<=i;j++){
				if(i%j==0)
					m++;
			}
			if(m==2)
				printf("%3d",i);
			i++;
			if(i>b)
				break;	
		}
	}	
	return 0;
}

