#include<stdio.h>
#include<math.h>
int main(){
	float a,x;
	scanf("%f%f",&a,&x);
	
	int k=0;
	int b=1;
	float i=pow(x,k)/b;
	float eMUx=0;
	while(i>=a){
		eMUx+=i;
		k++;
		b*=k;
		i=pow(x,k)/b;		
	}
	printf("%f",eMUx);
	return 0;
}

