#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c; // bien toan cuc -- global variable
	printf("Nhap vao so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap vao so thu hai:\n");
	scanf("%d",&b);
	printf("Nhap vao so thu ba:\n");
	scanf("%d",&c);

	if(a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b +c > a)){
		printf("Day la 3 canh cua mot tam giac\n");
		int p = a + b + c; // bien dia phuong - local variable
		printf("Chu vi tam giac: %d\n",p); // toi uu chuong trinh 
		float p2 = (float)p/2;
		float S = sqrt(p2* (p2-a) * (p2-b) * (p2-c));
		printf("Dien tich tam giac: %f\n",S);
	}else{
		printf("day khong phai 3 canh tam giac");
	}

}

