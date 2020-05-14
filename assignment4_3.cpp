#include <stdio.h>

int main(){
	int S=0;// s= n*(n+1)/2

	for (int i = 0; i <= 1000; ++i)// ko dc co dau ;
	{
		S+=i;
	}
	printf("S= %d\n",S);
}
