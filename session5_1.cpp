#include <stdio.h>

int main(){
	
	for(int cnt=0;cnt<1000;cnt++){
		printf("Scooby!");
	}
	/*
		for(init counter;condition;update value){
			// statements;
		}
	*/
	for(int cnt=0;cnt<1000;cnt++){ // biet ngay la duyet tu 0 -> 1000
		printf("Scooby!");
	}
	for(int cnt=0;cnt<1000;cnt++){
		printf("Scooby!");
	}
	for(int cnt=0;cnt<1000;cnt++){
		printf("Scooby!");
	}
		for(int cnt=0;cnt<1000;cnt++){
		printf("Scooby!");
	}
		for(int cnt=0;cnt<1000;cnt++){
		printf("Scooby!");
	}
//	printf("cnt= %d",cnt); // error vi cnt la local variable
	
	int cnt2=0;
	while(cnt2 < 1000){
		printf("Scooby!");
		cnt2++; // quen dong nay -> vong lap vo han --> cai nay newbie hay gap
	}
	// ra day thi cnt2 = 1000
	while(cnt2 < 1000){
		printf("Scooby!");
		cnt2++;
	}
	/* // comment 1 doan 
		while(condition){
			statements; //cac lenh can chay
			// neu co bien dem thi phai chu thay doi cho phu` hop
		}
	*/
	int cnt3 = 0;
	do{
		printf("Scooby!")
		cnt3++;
	}while(cnt3<1000);  // chay thu 1 lan roi kiem tra dieu kien, neu dieu kien thoa man moi chay tiep
}
