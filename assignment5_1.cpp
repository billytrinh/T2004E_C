#include <stdio.h>

int main(){
	int a,b,sum=0;
	printf("nhap a=\n");
	scanf("%d",&a);
	do{
		printf("nhap so lon hon %d:\n",a);
		scanf("%d",&b);
	}while(b<=a);
	for(int i=a;i<=b;i++){
		sum+=i;// sum = sum + i;
	}
	printf("sum = %d\n",sum);
}
