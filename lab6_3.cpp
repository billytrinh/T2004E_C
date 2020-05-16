#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n],sum=0,count=0;
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	
	int x;
	printf("Nhap so can tim:");
	scanf("%d",&x);
	int i=0;
	for(i=0;i<n;i++){
		if(ary[i] == x){
			break;
		}
	}
	
	if(i>=n){
		printf("Khong ton tai %d trong mang",x);
	}else{
		printf("%d nam trong mang",x);
	}
}
