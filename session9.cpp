#include <stdio.h>

int TinhTong(int a,int b){
	int c = a+b;
	return c;
}

bool KiemTraSoNguyenTo(int a){
	if(a < 2) return false;
	if(a == 2) return true;
	for(int i=2;i<=a/2;i++){
		if(a%i==0)
			return false;
	}
	return true;
}

int main(){
	bool t = true;
	bool f = false;
	int x=10,y=20;
	int sum;
	sum = TinhTong(10,20);
	int sum2 = TinhTong(40,14);
	
	if(KiemTraSoNguyenTo(97)){
		printf("97 la so nguyen to");
	}else{
		printf("97 ko phai nguyen to");
	}
	if(KiemTraSoNguyenTo(998)){
		printf("998 la so nguyen to");
	}else{
		printf("998 ko phai nguyen to");
	}
	
	return 0;
}
