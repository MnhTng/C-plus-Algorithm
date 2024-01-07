#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float D=b*b-4*a*c;
	if(a!=0){
		if(D>0)	printf("%.2f %.2f",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
		if(D==0)printf("%.2f",-b/(2*a));
		if(D<0)	printf("NO");	
	}
	else{
		if(b==0){
			if(c==0||c!=0) printf("NO");
		}
		else printf("%.2f",-b/c);		
	}
	return 0;
}

