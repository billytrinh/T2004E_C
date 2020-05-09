#include <stdio.h>
#include <math.h>

int main(){
 	int a,b,c;
	printf("Nhap vao so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap vao so thu hai:\n");
	scanf("%d",&b);
	printf("Nhap vao so thu ba:\n");
	scanf("%d",&c);
	if(a > 0){
		if(b >0){
			if(c > 0){
				if(a+b >c){
					if(a+c > b){
						if(b+c > a){
							printf("Day la 3 canh tam giac\n");
							int p = a+b+c;
							printf("Chu vi tam giac: %d\n",p);
							float p2 = (float)p/2;
							float S = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
							printf("Dien tich tam giac: %f\n",S);
						}else{
							printf("Day khong phai 3 canh tam giac");
						}
					}else{
						printf("Day khong phai 3 canh tam giac");
					}
				}else{
					printf("Day khong phai 3 canh tam giac");
				}	
			}else{
				printf("Day khong phai 3 canh tam giac");
			}
		}else{
			printf("Day khong phai 3 canh tam giac");
		}
	}else{
		printf("Day khong phai 3 canh tam giac");
	}
	
}
