#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d:\n",i);
		scanf("%d",ary+i);
	}
	int max = 0, count = 0;
	for(int i=0;i<n;i++){
		if(ary[i] > 0){
			count++;
			if(count > max) max = count;
		}else{
			count = 0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat: %d\n",max);
}
