// nhap vao 1 so, tinh binh` phuong cua no
#include <stdio.h> // std in out -- ko phai studio
int main(){
	int x;
	printf("Nhap vao gia tri:\n");
	scanf("%d",&x); // nhap so nguyen thi %d - nhap cho bien x thi &x
	int x2;
	x2 = x*x;// day la phep gan gia tri
	printf("binh phuong: %d \n",x2);
	// neu muon viet ro rang hon:
	printf("binh phuong cua %d la: %d",x,x2);
}
// nhap vao 2 so nguyen, tinh tong va hieu cua 2 so do.
