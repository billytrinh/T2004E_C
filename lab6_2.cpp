#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n],sum=0,count=0;
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	
	for(int i=0;i<n;i++){
		if(ary[i]%2 != 0 && i%2==0){
			sum+= ary[i];
			count++;
		}
	}
	
	printf("Trung binh cac so le: %f",(float)sum/count);
}
