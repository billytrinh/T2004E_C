#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri cho pt thu %d\n",i);
		scanf("%d",&ary[i]);
		for(int j=0;j<i;j++){
			if(ary[i]== ary[j]){
				i--;
				break;
			}
		}
	}
	printf("Mang vua nhap:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",ary[i]);
	}
	
//	for(int i=0;i<10;i++){
//		for(int j=0;j<2;j++){
//			for(int k=0;k<3;k++){
//				printf("hello world!\n");
//			}
//		}
//	}
	
	
}
