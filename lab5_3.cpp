#include <stdio.h>

int main(){
	// y tuong: cu cho chay counter den khi tinh du 100 so le
	int sum = 0;
	
	for(int i=0,count=0,j=0; count < 100 ;i++,j++){
		if(i %2 !=0 ){
			sum +=i;
			count++;
		} 
	}
	printf("Sum = %d",sum);
}
