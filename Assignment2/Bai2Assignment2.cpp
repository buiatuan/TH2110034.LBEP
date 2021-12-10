#include <stdio.h>

int main(){
	int m, d;
	printf("nhap ngay:");
	scanf("%d",&d);
	printf("nhap thang:");
	scanf("%d",&m);
	
	int a, b;
	a = 0;
	b = 0;
	
	if(m>0 && m<13 && d>0 && d<32){
		if(m==1){
			a = d;
			b = a%7 +1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==2 && d<29){
			a = d+31;
			b = a%7 + 1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==3){
			a = d+31+28;
			b = a%7 + 1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==4 && d<31){
			a = d+31+28+31;
			b = a%7 + 1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==5){
			a = d+31+28+31+30;
			b = a%7 +1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==6 && d<31){
			a = d+31+28+31+30+31;
			b = a%7 + 1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==7){
			a = d+31+28+31+30+31+30;
			b = a%7 + 1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==8){
			a = d+31+28+31+30+31+30+31;
			b = a%7 + 1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==9 && d<31){
			a = d+31+28+31+30+31+30+31+31;
			b = a%7 +1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==10){
			a = d+31+28+31+30+31+30+31+31+30;
			b = a%7 +1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==11 && d<31){
			a = d+31+28+31+30+31+30+31+31+30+31;
			b = a%7 +1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else if(m==12){
			a = d+31+28+31+30+31+30+31+31+30+31+30;
			b = a%7 +1;
			printf("day la ngay thu: %d cua nam\n",a);
			printf("day la thu: %d trong tuan\n",b);
		}else{
			printf("khong hop le");
		}
	}else{
		printf("khong hop le");
	}
}
