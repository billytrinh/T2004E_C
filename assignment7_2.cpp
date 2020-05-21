#include <stdio.h>

int main(){
	int A[4][3],B[4][3];
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("A[%d][%d] = \n",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("B[%d][%d] = \n",i,j);
			scanf("%d",&B[i][j]);
		}
	}	
	int C[4][3],D[4][3];
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			C[i][j] = A[i][j]+B[i][j];
			D[i][j] = A[i][j]-B[i][j];
		}
	}
	
	printf("Tong 2 ma tran:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",C[i][j]);
		}
		printf("\n");
	}
	printf("Hieu 2 ma tran:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",D[i][j]);
		}
		printf("\n");
	}
}
