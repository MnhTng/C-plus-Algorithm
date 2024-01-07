#include<stdio.h> 
//Uoc<n luon <=n/2
int soHoanHao(int n){ 
	int a=1,i; 
	for(i=2;i*i<=n;i++){ 
		if(n%i==0){ 
			if(i==n/i)
				a+=i; 
			else 
				a+=i+n/i; 
		} 
	} 
	if(a==n) 
		return 1; 
	return 0; 
} 
int main(){ 
	int m,n; 
	scanf("%d%d",&m,&n);
	if(m>n){
		int k=m;
		m=n;
		n=k;
	}
	int i; 
	for(i=m;i<n;i++){ 
		if(soHoanHao(i))
			printf("%d ",i); 
	}
	return 0; 
}
