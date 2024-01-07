#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	
	if(m<0 && m>=n)
		return 0;
	else{
		while(1){
			float a;
			int b=0,i;
			for(i=m;i<=n;i++){
				a=sqrt(i);
				if(a==(int)a){
					printf("%d  ",i);
					b++;
				}
			}
			printf("\n%d",b);
			break;		
		}
	}	
	return 0;
}

