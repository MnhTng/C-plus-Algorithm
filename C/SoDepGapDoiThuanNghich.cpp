#include "stdio.h" 
#include "math.h" 
int sothuannghich(long long n){ 
	long long dao=0,m=n=n/10,sochu=0,x; 
	while (m>9){ 
		dao=dao*10+m%10; 
		m/=10; 
		sochu++; 
	} 
	x=pow(10,sochu); 
	if (dao==n%x) 
		return 1; 
	else 
		return 0; 
} 
int main(){ 
	int t; 
	scanf ("%d",&t); 
	while (t--){ 
		long long n,sodau,socuoi; 
		scanf ("%lld",&n); 
		socuoi=n%10; 
		sodau=n; 
		while (sodau>9) 
			sodau/=10; 
		if (sodau==2*socuoi || 2*sodau==socuoi && sothuannghich(n)) 
			printf ("YES\n"); 
		else 
			printf ("NO\n"); 
	} 
}
