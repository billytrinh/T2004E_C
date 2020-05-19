#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap 1 so nguyen duong:\n");
		scanf("%d",&n);
	}while(n<=0);
	int n2 = n,sum=0;
	for( ; n2!=0;n2/=10){
		sum+=n2%10;
	}
	printf("Tong chu so cua %d la: %d\n",n,sum);
}
