#include <stdio.h>
#include <string.h>
struct Student{
	char sName[50];
	int mark;
	char sId[20];
};
struct Teacher{
	char tName[50];
	int tAge;
};
struct Class{
	struct Teacher tClass;
	struct Student students[25];
	char room[20];
};
struct BestStudent{
	struct Student st;
	char reward[50];
	int position;
};
int main(){
	struct Student anh,khuong;
	struct BestStudent st2019;

	anh.mark = 5;
	khuong.mark=4;	 
	strcpy(khuong.sName,"khuong");
	
	st2019.position = 1;
	strcpy(st2019.reward,"Vodichhangcan50");
	memcpy(&st2019.st,&anh,sizeof(struct Student));
	
	printf("Ten cua khuong la: %s\n",khuong.sName);
	
	memcpy(&anh,&khuong,sizeof(struct Student));// copy thong tin tu khuong sang anh
	// anh = khuong <-- cach hieu
	struct Student T2004E[3];
	for(int i=0;i<3;i++){
		printf("Nhap thong tin sinh vien thu %d:\n",i);
		printf("nhap ten SV:\n");
		scanf("%s",T2004E[i].sName);
		printf("nhap diem thi SV:\n");
		scanf("%d",&T2004E[i].mark);
		printf("nhap MS SV:\n");
		scanf("%s",T2004E[i].sId);
	}
	
	return 0;
}
