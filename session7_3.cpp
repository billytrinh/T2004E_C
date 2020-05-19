#include <stdio.h>
int main(){
	int ary[5] = {4,8,1,0,-4};
	
	for(int i=0;i<4;i++){
		for(int j=0;j<5-i-1;j++){
			if(ary[j]> ary[j+1]){
				int temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
	
	for(int i=0;i<5;i++){
		printf("%5d",ary[i]);
	}
}
