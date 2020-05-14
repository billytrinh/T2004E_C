#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		if(i%3==0){// neu i chia cho 3 du 0
			printf("%d chia het cho 3\n",i );
		}
	}
}