#include<stdio.h>
#include<math.h>
int ngTo(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int t,d=1;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n][n];
		printf("Test %d:\n",d++);
		int tam[n*n],m=0,k=2;
		while(m<n*n){
			if(ngTo(k)){
			tam[m++]=k;
				k++;
			}
			else
				k++;
		}
		int a=0,b=n,c=n*n,i,j,p=0;
		while(a<=b){
			for(i=a;i<b;i++)
				arr[a][i]=tam[p++];
			for(i=a+1;i<b;i++)
				arr[i][b-1]=tam[p++];
			for(i=b-2;i>=a;i--)
				arr[b-1][i]=tam[p++];
			for(i=b-2;i>a;i--)
				arr[i][a]=tam[p++];
			a++;
			b--;				
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				printf("%d ",arr[i][j]);
			printf("\n");	
		}
		printf("\n");
	}
	return 0;
}

