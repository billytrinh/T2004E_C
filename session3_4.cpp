#include <stdio.h>

int main(){
	int num;
	printf("Nhap num = \n");
	scanf("%d",&num);
	if(num >=2 && num <=7){
		printf("Day la thu %d",num);
	}else if(num == 8){
		printf("day la chu nhat");
	}else{
		printf("khong phai ngya trong tuan");
	}
	
	switch(num){
		case 2: printf("Day la thu 2");break;
		case 3: printf("Day la thu 3");break;
		case 4: printf("Day la thu 4");break;
		case 5: printf("Day la thu 5");break;
		case 6: printf("Day la thu 6");break;
		case 7: printf("Day la thu 7");break;
		case 8: printf("Day la chu nhat");break;	
		default: printf("khong phai ngay trong tuan");
	}
	
	char c = 'y';
	
	switch(c){
		case 'y': printf("Tiep tuc cai win");break;
		case 'n': printf("thoat ra ngoai");break;
	}
	
}
