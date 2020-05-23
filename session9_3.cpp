#include <stdio.h>

int main(){
	char str[20];// khai bao mang ky tu - chuoi (string)
//	for(int i=0;i<20;i++){
//		scanf("%c",&str[i]);
//	}
	scanf("%s",str);
	char str2[20];
	gets(str2);// unsafe -- rat it dung
	printf("str = %s\n",str);
	puts(str2); // unsafe -- rat it dung
}
