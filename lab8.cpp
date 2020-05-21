#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,*p;
	printf("n=\n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap vao so thu %d:\n",i);
		scanf("%d",(p+i));
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if( *(p+j) > *(p+j+1)){
				int tmp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = tmp;	
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%5d",*(p+i));
	}
	printf("\n");
	p = (int *)realloc(p,n*2*sizeof(int));
	printf("Nhap them:\n");
	for(int i=n;i<2*n;i++){
		printf("Nhap vao so thu %d:\n",i);
		scanf("%d",(p+i));
	}
	for(int i=0;i<2*n-1;i++){
		for(int j=0;j<2*n-i-1;j++){
			if( *(p+j) > *(p+j+1)){
				int tmp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = tmp;	
			}
		}
	}
		for(int i=0;i<2*n;i++){
		printf("%5d",*(p+i));
	}
}
