#include <stdio.h>

int main(){
	
	int a, b, c;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	printf("nhap c = ");
	scanf("%d",&c);
	
	int min = a;
	
	if(b<min){
		min = b;
	}	
	if(c<min){
		min = c;
	}
	printf("so nho nhat la: %d",min);
}
