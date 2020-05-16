// nhap vao 1 mang 10 so nguyen, tinh tong gia tri cua 10 so nay
#include <stdio.h>

int main(){
	int ary[10];
	
	for(int i=0;i<10;i++){
		printf("nhap so thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	
	int sum =0;
	for(int i=0;i<10;i++){
		sum+= ary[i];
	}
	
	printf("Tong 10 so: %d\n",sum);
}
