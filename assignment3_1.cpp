#include <stdio.h>

int main(){
	int num;
	printf("nhap so can tinh:");
	scanf("%d",&num);
	
	if(num>0 && num <= 9999){
		int n1 = num, n2=0;
		n2 = n2*10 + n1%10;
		n1 /= 10;
		if(n1 > 0){
			n2 = n2*10 + n1%10;
			n1 /= 10;
			if(n1>0){
				n2 = n2*10 + n1%10;
				n1 /= 10;
				if(n1 > 0){
					n2 = n2*10 + n1%10;
					n1 /= 10;
				}
			}
		}
		printf("nghich dao: %d",n2);
	}else{
		printf("gia tri khong phu hop");
	}
}
