#include <stdio.h>
#include <stdlib.h>
typedef struct Product{
	char productName[50];
	char brand[50];
	int quantity;
	int price;
	int productID;
}Product;
typedef struct Staff{
	char staffName[50];
	int staffID;
}Staff;
typedef struct Customer{
	char customerName[50];
	char telephone[20];
	char address[255];
}Customer;
struct Order{
	int orderID;
	int grandTotal;
	Product products[10];
	char dateTime[30];
	Staff staff;
	Customer customer;
};
int main(){
	Staff stt[3],*st;
	st = (Staff *)malloc(4*sizeof(Staff));
	for(int i=0;i<4;i++){
		printf("nhap ID:\n");
		scanf("%d",&((st+i)->staffID));// (st+i)->staffID <==> st[i].staffID
		printf("nhap ten NV:\n");
		scanf("%s",(st+i)->staffName); 
	}
}
