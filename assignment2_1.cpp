#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap vao so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap vao so thu hai:\n");
	scanf("%d",&b);
	printf("Nhap vao so thu ba:\n");
	scanf("%d",&c);
	
	if(a > b){
		if(a > c){
			printf("Max: %d",a);
		}else{
			printf("Max: %d",c);
		}
	}else{
		if(b > c){
			printf("Max: %d",b);
		}else{
			printf("Max: %d",c);
		}
	}
}
