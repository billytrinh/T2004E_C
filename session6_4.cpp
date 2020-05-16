#include <stdio.h>

int main(){
	// break continue
	int ary[10]= {1,2,3,4,5,6,7,8,9,10};//khai bao va gan gia tri ban dau cho mang
	
	for(int i=0;i<10;i++){
		if(ary[i]==5){
			break; // khi gap gia tri = 5 thi dung vong lap
		}
		printf("%d\n",ary[i]);
	}
	printf("Continue;\n");
	for(int i=0;i<10;i++){
		if(ary[i]== 5){
			continue; // khi gap continue se bo qua vong nay va sang lam vong tiep theo
		}
		printf("%d\n",ary[i]);
	}
}
