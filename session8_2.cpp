#include <stdio.h>

int main(){
	int ary[5] = {1,2,3,4,5}; // ary chinh la bien con tro duoc cap quyen su dung 5 o nho
	
	for(int i=0;i<5;i++){
		printf("%3d",ary[i]);
	}
	printf("\n");
	for(int i=0;i<5;i++){
		printf("%3d", *(ary+i));
	}
}
