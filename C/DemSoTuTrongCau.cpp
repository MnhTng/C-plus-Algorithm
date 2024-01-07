#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char str[1000];
	fgets(str, 999, stdin);
	int i,a=0;
	for(i=0;i<strlen(str)-1;i++){
		if(!isspace(str[i]) && isspace(str[i+1]))
			a++;
	}
	printf("%d",a);
	return 0;
}

