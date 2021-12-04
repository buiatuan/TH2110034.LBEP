#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
		printf("nhap a = ");
		scanf("%d",&a);
		printf("Nhap b = ");
		scanf("%d",&b);
		printf("Nhap c = ");
		scanf("%d",&c);
		

	
	if(a+b>c && a+c>b && b+c>a){
		
		float p = (float)(a+b+c)/2;
		float s = sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("la ba canh cua tam gia\n");
		printf("co chu vi la: %d\n",a+b+c);
		printf("dien tich la: %f\n",s);
		
	}else{
		printf("khong phai ba canh tam giac");
	}
	
}
