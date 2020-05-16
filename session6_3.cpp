//Tìm so gan lon nhat va gan nho nhat trong mang 20 phan tu
// 1 4 7 4 3 -> max: 7 -> n_max: 4, min: 1 , n_min:3
#include <stdio.h>

int main(){
	int ary[10];
	for(int i=0;i<10;i++){
		printf("nhap so thu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	
	int max = ary[0], min = ary[0];
	for(int i=0;i<10;i++){
		if(max < ary[i]){
			max = ary[i];
		}
		if(min > ary[i]){
			min = ary[i];
		}
	}
	// da tim dc min max
	int n_max = min, n_min = max; // 1 cach meo khi mà biet ca min va max
	
	// cach triet de khi chi co max hoac min
	for(int i=0;i<10;i++){
		if(ary[i] != max) {
			n_max = ary[i];
		}
		if(ary[i] != min){
			n_min= ary[i];
		}
	}
	for(int i=0;i<10;i++){
		if(n_max < ary[i] && ary[i]< max){
			n_max = ary[i];
		}
		if(n_min> ary[i] && ary[i] > min){
			n_min = ary[i];
		}
	}
	
	printf("N max: %d\n",n_max);
	printf("N min: %d\n",n_min);
}
