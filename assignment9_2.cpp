#include <stdio.h>
#include <string.h>

bool Contains(char s1[],char s2[]){
	if(strlen(s1)<strlen(s2)) return false;
	for(int i=0;i< strlen(s1);i++){
		if(s2[0] == s1[i]){
			int count = 1;
			for(int j=1;j< strlen(s2);j++){
				if(s2[j] == s1[j+i]){
					count++;
				}
			}
			if(count == strlen(s2)) 
				return true;
		}
	}
	return false;	
}

int main(){
	char s1[20],s2[20];
	printf("nhap chuoi s1:\n");
	scanf("%s",s1);
	printf("nhap chuoi s2:\n");
	scanf("%s",s2);
	if(Contains(s1,s2)){
		printf("Chuoi %s nam trong %s",s2,s1);
	}else{
		printf("Chuoi %s ko nam trong %s",s2,s1);
	}
}
