#include<stdio.h> 
#include<math.h>
int soCs(long n){
	int i,j=0;
	while(n>0){
		i=n%10;
		n/=10;
		j++;
	}
	return j;
}
int main(){ 
	int t; 
	scanf("%d",&t);  
	while(t--){ 
		long n;
		scanf("%ld",&n); 
		int k=soCs(n);
		
		int m=1; 
		unsigned int a; 
		long b=0;  
		while(k>0){
			int d=0; 
			a=n/pow(10,k-1); 
			if(a==1)  
				d=1;
			else if(a==0 || a==8 || a==9)
				d=0;
			else{
				m=0;
				break;
			}	
			b+=d*pow(10,k-1);
			n=n-a*pow(10,k-1);
			k--; 
		} 
		if(m==0) 
			printf("INVALID\n");	 
		else{
			if(b==0)
				printf("INVALID\n");
			else
				printf("%ld\n",b);		
		} 	  
	} 
	return 0; 
}

