#include <stdio.h>

int main(){
	int a = 10,b;
//	int a = int b = 10 ;//sai
	a = b = 10;
	printf("a =%10d\n",a);// dung 10 o tren man hinh de hien thi so nguyen a
	float pi = 3.14159;
	printf("pi = %0.5f\n",pi); // dinh dang lai cach hien thi so thuc voi 5 chu so sau dau .
	
	char c;
	c = getchar();// nhap ky tu --> it dung
	putchar(c);// in ky tu --> rat it dung hoac ko dung
	printf("ky tu vua nhap: %c",c);
} 

// su dung and or not de lam lai bai tap : nhap 3 so vaf kiem tra tam giac.
