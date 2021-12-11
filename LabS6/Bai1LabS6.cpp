#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int a=n;
	int s=0, du=0;
	for(;n>0;n=n/10){
		du=n%10;
		s+=du;
	}
	printf("tong cac chu so cua %d la: %d",a,s);
}
