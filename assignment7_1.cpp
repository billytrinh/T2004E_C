#include <stdio.h>
int main(){
	int ary[4][4],sum1=0,sum2=0;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("ary[%d][%d]=\n",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j) 
				sum1 += ary[i][j];
			if((i+j) == 3)	
				sum2 += ary[i][j];
			
		}
	}
	printf("Duong cheo 1 co TB cong: %f\n",(float)sum1/4);
	printf("Duong cheo 2 co TB cong: %f\n",(float)sum2/4);
}
