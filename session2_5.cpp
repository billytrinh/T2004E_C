// nhap vao 1 so, kiem tra la so am hay duong ( gia su 0 la so duong)
#include <stdio.h>
int main(){
	int num;
	printf("Nhap vao so can kiem tra:\n");
	scanf("%d",&num);
	if(num >=0){ // dung hoac sai
		// day la nhanh dung
		printf("%d la so duong",num);
	}else{
		// day la nhanh sai
		printf("%d la so am",num);
	}
}
// nhap vao 1 so, kiem tra no la chan hay le
