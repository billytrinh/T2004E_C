#include <stdio.h>
int main(){
	int n,x1=1,x2=1,x3=2;
	printf("Nhap n = \n");
	scanf("%d",&n);
	if(n<2){
		printf("So can tim: 0\n");
	}
	if(n==2){
		printf("So can tim: %d\n",x2);	
	}
	for(;x2+x3<n;){
		x1 = x2;
		x2 = x3;
		x3 = x1+x2;	
	}
	printf("So can tim: %d\n",x3);
}
