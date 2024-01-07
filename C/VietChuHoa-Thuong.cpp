#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuHoa(char *str){
	int i;
	for(i=0;i<strlen(str)-1;i++)
		str[i]=toupper(str[i]);
	puts(str);	
}
void chuThuong(char *str){
	int i;
	for(i=0;i<strlen(str)-1;i++)
		str[i]=tolower(str[i]);
	puts(str);	
}
int main(){
	char str[1000];
	fgets(str, 1000, stdin);
	chuHoa(str);
	chuThuong(str);
	return 0;
}

