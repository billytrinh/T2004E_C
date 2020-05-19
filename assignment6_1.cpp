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
	int s = 0;
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
			s = ary[i];
		}
	}
	if(s!=0) printf("So le cuoi cung cua mang: %d\n",s);
	else printf("Khong co so le nao ca");
}
