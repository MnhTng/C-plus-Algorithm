#include<stdio.h>
#include<string.h>
int main(){
	char str[10];
	fgets(str, 10, stdin);
	char dao[10];
	strcpy(dao,str);
	strrev(str);
	if(strcmp(str,dao)==0)
		printf("YES");
	else
		printf("NO");	
	return 0;
}

