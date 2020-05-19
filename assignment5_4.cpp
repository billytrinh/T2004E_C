#include <stdio.h>
int main(){
	int a,b;
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	int a2=a,b2=b;
	if(a<0) a2 = -a;
	if(b<0) b2 = -b;
	if(a == 0) printf("UCLN: %d\n",b2);
	else if(b == 0) printf("UCLN: %d\n",a2);
	
	for(int i=a2;i>0;i--){// chay tu 1 so bat ky trong 2 so
		if(a%i==0 && b%i==0){
			printf("UCLN: %d\n",i);
			break;
		}
	}
}
