#include <stdio.h>
int main(){
	int n;
//	do{
		printf("nhap 1 so nguyen:\n");
		scanf("%d",&n);
//	}while(n<=0);
	int n2= n;
	int count = 0;
	if(n2==0) count = 1;
//	while(n2!=0){
//		count ++;
//		n2/=10;
//	}
	for( ;n2!=0;count++,n2/=10);
	printf("So chu so cua %d la: %d\n",n,count);
}
