#include <stdio.h>

int main(){
	int x1,x2,x3,x4,x5,sum;
	
	printf("Nhap vao 5 so\n");
	printf("So thu nhat:\n");
	scanf("%d",&x1);
	printf("So thu hai:\n");
	scanf("%d",&x2);
	printf("So thu ba:\n");
	scanf("%d",&x3);
	printf("So thu tu:\n");
	scanf("%d",&x4);
	printf("So thu nam:\n");
	scanf("%d",&x5);
	printf("nhap xong\n");
	
	sum = x1+x2+x3+x4+x5;
	printf("tong 5 so: %d + %d + %d + %d + %d = %d",x1,x2,x3,x4,x5,sum);
}
