#include <stdio.h>

int main(){
	// input n
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	// n2=0
	int n2 = 0;
	
	// n!=0
	for(; n!=0 ; n/=10){ // for la loai loop hay dung nhat trong lap trinh
		// nhanh Yes
		n2 = n2*10 + n%10;
	}
	// nhanh No - display n2
	printf("nghich dao: %d",n2);
}
