#include <stdio.h>

int main(){
	int ary[5], arr[5]; // array index: 0 -> 4
	// scanf("%d",&x);// nhap gia tri cho x
	for(int i=0;i<5;i++){
		printf("Nhap gia tri thu %d:",i);
		scanf("%d",&ary[i]);// x hay ary[i] tuong duong nhau ve mat bo nho may tinh
	}
	
	// ra day da co 1 mang ary co 5 so nguyen
	int max = ary[0];
	for(int i=0;i<5;i++){
		if(ary[i]> max){
			max = ary[i];
		}
	}
	
	printf("GIa tri lon nhat: %d",max);
	
	
	int x = 10, y;
	y = x;// y= 10
	
//	arr = ary; // vi day la 2 mang -> ko the gan mang vao mang
	for(int i=0;i<5;i++){// i:  index - chay tu 0
		// xet tung phan tu cua mang -->duyet mang
		arr[i] = ary[i];// nhu the nay se duyet
	}
}
