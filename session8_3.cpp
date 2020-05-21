#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p;
	//p = (int *)malloc(10*sizeof(int));
	p = (int *)calloc(10,sizeof(int));// cung cap 10 o nho
	for(int i=0;i<10;i++){
		printf("nhap pt thu %d:\n",i);
		scanf("%d",(p+i));
	}
	printf("lan 1: \n");
	for(int i=0;i<10;i++){
		printf("%3d",*(p+i));
	}
	printf("\n");
	printf("gia su nhieu sinh vien hon nua, muon xay them 10 phong\n");
	p= (int *)realloc(p,20*sizeof(int));
	for(int i=10;i<20;i++){
		printf("nhap pt thu %d:\n",i);
		scanf("%d",(p+i));
	}
	printf("lan 2: \n");
	for(int i=0;i<20;i++){
		printf("%3d",*(p+i));
	}
	//p = (int *)realloc(p,0*sizeof(int));// trinh don rac
	free(p);// giai phong o nho
	// to be continue..
}
