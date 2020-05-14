#include <stdio.h>

int main(){
	int a,b,c;

	printf("Nhap canh thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap canh thu hai:\n");
	scanf("%d",&b);
	printf("Nhap canh thu ba:\n");
	scanf("%d",&c);

	while(!(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)){ // thich hop voi dung while
		// nhap lai 3 canh
		printf("Nhap lai canh thu nhat:\n");
		scanf("%d",&a);
		printf("Nhap lai canh thu hai:\n");
		scanf("%d",&b);
		printf("Nhap lai canh thu ba:\n");
		scanf("%d",&c);
	}
	// day la khi chay xong vong lap

}




