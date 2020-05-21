#include <stdio.h>
#include <iostream>

int main(){
	int x = 10;
	int *p;
	printf("dia chi cua x: ");
	std::cout << &x; // dung tam cua C++
	printf("\n");
	printf("dia chi cua p: ");
	std::cout << &p;
	printf("\n");
	p = &x;
	printf("gia tri cua p: ");
	std::cout << p;
	printf("\n");
	printf("Ngo xem nha day bao nhieu tien: ");
	std::cout << *p;
	(*p)--;
	printf("\n");
	printf("Nha cua x sau khi bi trom: ");
	std::cout << x;
}
