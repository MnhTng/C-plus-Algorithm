//#include<stdio.h>
//#include<math.h>
//int koGiam(int n){
//	int a=n%10;
//	n/=10;
//	int b;
//	while(n>0){
//		b=n%10;
//		n/=10;
//		if(a>=b)
//			a=b;
//		else
//			return 0;
//	}
//	if(a<b)
//		return 0;
//	return 1;	
//}
//int main(){
//	int i;
//	scanf("%d",&i);
//	while(i--){
//		int n;
//		scanf("%d",&n);
//		if(n<2 || n>6)
//			return 0;
//		else{
//			int x=pow(10, (n-1));
//			int y=pow(10, n);
//			for(x;x<y;x++){
//				if(koGiam(x))
//					printf("%d ",x);
//			}
//		}		
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h> 
int n, k, a[1000000], ok; 
void Ktao(){ 
	for(int i = 0; i < n; i++){ 
		a[i] = 1; 
	} 
} 
void Sinh(){ 
	int i = n-1; 
	while(i >= 0 && a[i] == 9) 
		i--; 
	if(i < 0) 
		ok = 0; 
	else { 
		a[i]++; 
		for(int j = i+1; j < n; j++){ 
			a[j] = a[i]; 
		} 
	} 
} 
int main(){ 
	int t; 
	scanf("%d", &t); 
	while(t--){ 
		scanf("%d", &n); 
		ok = 1; 
		Ktao(); 
		while(ok){ 
			for(int i = 0; i < n; i++) 
				printf("%d", a[i]); 
			printf(" "); 
			Sinh(); 
		} 
		printf("\n"); 
	} 
}

