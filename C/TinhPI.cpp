#include<stdio.h>
int main(){
	float a;
	scanf("%f",&a);
	
	int i=-1,k=0;
	float j=1.0/(2*k+1);
	float b=0;
	while(j>=a){
		j=1.0/(2*k+1);
		b+=(-1)*i*j;
		i*=-1;
		k++;
	}
	float PI=4*b;
	printf("%.10f",PI);
	return 0;
}

