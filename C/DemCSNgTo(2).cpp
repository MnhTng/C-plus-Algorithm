#include<stdio.h>
#include<math.h>
int ngto(int n){
	if(n==0 || n==1)
		return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;	
}
int ktra(int *arr, int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==x)	
			return i;
	}
	return -1;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,c=0;
	int b[10],d[10];
	for(i=0;i<10;i++)
		b[i]=0;
	while(n>0){
		i=n%10;
		n/=10;
		if(ngto(i)){
			int x=ktra(b,c,i);
			if(x==-1){
				b[c]=i;
				d[c]=1;
				c++;
			}
			else
				d[x]++;
		}
	}
	for(i=c-1;i>=0;i--)
		printf("%d %d\n",b[i],d[i]);
	return 0;
}
