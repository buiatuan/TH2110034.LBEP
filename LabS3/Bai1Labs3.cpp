#include <stdio.h>

int main(){
	
	int a;
	printf("nhap so tu 2 den 8: ");
	scanf("%d",&a);
	
	if(a>=2 && a<=7){
		printf("day la thu: %d",a);
	}else if(a==8){
		printf("day la chu nhat");
		}else{
			printf("khong phai ngay trong tuan");
	}
}
