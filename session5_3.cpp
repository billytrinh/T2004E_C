// nhap 1 so tu ban phim, dam bao no la so le
#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao 1 so le:");
		scanf("%d",&n);
	}while(n%2 == 0);
	
	printf("So le toi vua kiem duoc la %d",n);
}


