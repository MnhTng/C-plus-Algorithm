//#include<stdio.h>
//#include<math.h>
//int ngTo(int n){
//	int i;
//	if(n==1 || n==0)
//		return 0;
//	for(i=2;i<=sqrt(n);i++){
//		if(n%i==0)
//			return 0;
//	}
//	return 1;
//}
//int main(){
//	int arr[4];
//	arr[1]=2;arr[2]=3;arr[3]=5;arr[4]=7;
//	
//	long n;
//	scanf("%ld",&n);
//	int p=0,k=n;
//	while(k>0){
//		p++;
//		k/=10;
//	}
//	
//	int m;
//	while(n>0){
//		int a=0,b=n;
//		m=n/pow(10,(p-1));
//		if(ngTo(m)){
//			while(b>0){
//				int c=b%10;
//				if(c==m)
//					a++;
//				b/=10;
//			}
//			int i;
//			for(i=1;i<=4;i++){
//				if(m==arr[i]){
//					printf("%d %d\n",m,a);
//					arr[i]=0;
//				}
//			}		
//		}
//		n=n-m*pow(10,(p-1));
//		p--;	
//	}
//	return 0;
//}
#include<stdio.h> 
int main() { 
	long long n; 
	scanf("%lld", &n); 
	int dem2=0,dem3=0,dem5=0,dem7=0; 
	while(n!=0) { 
		int a=n%10; 
		n=n/10; 
		switch(a) { 
			case 2 : 
				dem2++; 
				break; 
			case 3 : 
				dem3++; 
				break; 
			case 5 : 
				dem5++; 
				break; 
			case 7 : 
				dem7++; 
				break; 
		} 
	} 
	if(dem2!=0) { 
		printf("2 %d\n", dem2); 
	} 
	if(dem3!=0) { 
		printf("3 %d\n", dem3); 
	} 
	if(dem5!=0) { 
		printf("5 %d\n", dem5); 
	} 
	if(dem7!=0) { 
		printf("7 %d\n", dem7); 
	} 
	return 0;
}
