#include<stdio.h>

bool KiemTraSoNguyenTo(int a){
	if(a < 2) return false;
	if(a == 2) return true;
	for(int i=2;i<=a/2;i++){
		if(a%i==0)
			return false;
	}
	return true;
}

void NhapGiaTriMang(int ary[],int n){
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d\n:",i);
		scanf("%d",&ary[i]);
	}
}

void NhapGiaTriMang2(int *ary,int n){
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d\n:",i);
		scanf("%d",&ary[i]);
	}
}

void InCacSNTTrongMang(int *ary,int n){
	for(int i=0;i<n;i++){
		if(KiemTraSoNguyenTo(ary[i])){
			printf("SNT: %d\n",ary[i]);
		}
	}
}

void SapXepMang(int ary[],int n){
	for(int i=0;i<n-1;i++){
		for(int j =0;j<n-i-1;j++){
			if(ary[j] > ary[j+1]){
				int tmp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = tmp;
			}
		}
	}
}

void InMang(int ary[], int n){
	for(int i=0;i<n;i++){
		printf("%5d",ary[i]);
	}
}

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	NhapGiaTriMang(ary,n);
	InCacSNTTrongMang(ary,n);
	SapXepMang(ary,n);
	printf("sau khi sap xep:\n");
	InMang(ary,n);
	return 0;
}
