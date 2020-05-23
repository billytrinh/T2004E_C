#include <stdio.h>
#include <string.h>

int main(){
	char str1[20],str2[20];
	printf("nhap chuoi 1:\n");
	scanf("%s",str1);
	printf("nhap chuoi 2:\n");
	scanf("%s",str2);
	
//	strcat(str1,str2);//str1 = hellot2004e   str2 = t2004e
//	printf("Chuoi 1 sau khi noi: %s\n",str1);
//	strcat(str2,str1);
//	strcat(str1,str2);
//	printf("Chuoi 2 sau khi noi: %s\n",str2);
	
	int cmp = strcmp(str1,str2);
	printf("Ket qua so sanh: %d",cmp);
	char hr = 'l';
	printf("Vi tri cua ky tu %c trong chuoi %s la: %d",hr,str1,strchr(str1,hr)-str1);
	strcpy(str1,str2);// copy str2 sang str1
	//strlen(str1); // dem so luong ky tu trong chuoi str1
	printf("do dai: %u",strlen(str1));
	return 0;
}
