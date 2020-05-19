#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		// nhap gia tri cho phan tu ary[i]
		// yeu cau nhap so duong
		int trungso = 0;
		do{
			printf("Nhap vao pt thu %d",i);
			scanf("%d",&ary[i]);
			for(int j=0;j<i;j++){
				if(ary[i] == ary[j]){
					trungso = 1;
					break;
				}
			}
		}while(trungso==1);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d\n",ary[i]);
	}
}
