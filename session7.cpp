#include <stdio.h>

int main(){
	for(int i=0;i<10;i++){
		printf("Before break; i = %d\n",i);
		if(i==5) continue;
		printf("After break;  i = %d\n",i);
	}
}
