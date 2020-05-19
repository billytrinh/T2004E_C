#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	int s,i;
	for(i=0;i<n;i++){
		if(ary[i]>0){
			s= ary[i];
			break;
		}
	}
	if(i>=n){
		printf("khong co so duong nao ca");
	}else{
		for(int j=0;j<n;j++){
			if(ary[j]>0 && ary[j]< s){
				s = ary[j];
			}
		}
		printf("So duong nho nhat: %d\n",s);
	}
	
}
