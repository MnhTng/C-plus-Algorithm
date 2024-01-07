#include<stdio.h>
#include<string.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	char str[100];
	const char a[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z','W'};
	int i=0;
	while(m){
		int k=m%n;
		m/=n;
		str[i++]=a[k];
	}
	str[i]='\0';
	strrev(str);
	puts(str);
	return 0;
}

