#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap vao so thu hai:\n");
	scanf("%d",&b);
	
	if(a >= b){
		if(b !=0){
			int c = a/b; // c la thuong cua a chia b
			int m = a%b; // m la so du cua a chia b
			printf("%d chia %d bang %d du %d",a,b,c,m);
		}else{
			printf("khong the chia cho 0");
		}
	}else{
		int c = a*b;
		printf("%d nhan %d bang %d",a,b,c);
	}
}
