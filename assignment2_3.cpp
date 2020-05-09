 #include <stdio.h>
 #include <math.h> 
 
 int main(){
 	int a,b,c;
	printf("Nhap vao so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap vao so thu hai:\n");
	scanf("%d",&b);
	printf("Nhap vao so thu ba:\n");
	scanf("%d",&c);
	
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("PT vo so nghiem");
			}else{
				printf("PT vo nghiem");
			}
		}else{
//			float c2 = (float)c;// ép kieu
//			float x = -c2/b; //(-3/2-> 1) // tu dong chuyen kieu
			float x = -(float)c/b; // ket hop 2 lenh tren
			printf("Nghiem cua PT: %f",x);
		}
	}else{
		int d = b*b-4*a*c;
		if(d < 0){
			printf("PT vo nghiem");
		}else{
			if(d == 0){
				int x = -(float)b/(2*a);
				printf("Nghiem kep cua PT: %d",x);
			}else{
				float x1 = (-b + sqrt(d))/(2*a);
				float x2 = (-b - sqrt(d))/(2*a);
				printf("PT co 2 nghiem la %f va %f",x1,x2);
			}
		}
	}
 }
