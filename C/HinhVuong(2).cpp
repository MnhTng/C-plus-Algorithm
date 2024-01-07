#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<2*n;i++){
		if(i==1 || i==2*n-1){
			for(j=1;j<2*n;j++)
				printf("%d",n);
		}
		else{
			for(j=n;j>abs(n-i);j--)
				printf("%d",j);	
			if(abs(n-i)>0){
				if(i<n){
					int a=n-i+1;
					for(j=i+1;j<=n;j++)
						printf("%d",n-i+1);
					for(j=n+1;j<2*n;j++){
						if(2*n-j>i)
							printf("%d",n-i+1);
						else{
							printf("%d",a);
							a++;
						}	
					}	
				}
				else if(i>n){
					int b=i-n+1;
					for(j=i-n;j>0;j--)
						printf("%d",i-n+1);
					for(j=n+1;j<2*n;j++){
						if(j<i)
							printf("%d",i-n+1);
						else{
							printf("%d",b);
							b++;
						}	
					}	
				}
			}
			else{
				int c=2;
				for(j=n+1;j<2*n;j++)
					printf("%d",c++);
			}	
		}
		printf("\n");	
	}
	return 0;
}

