#include <stdio.h>
#include <math.h>

float Perimeter(float a,float b,float c){
	float p=a+b+c;
	return p;
}
float Acreage(float a,float b,float c){
	float p=Perimeter(a,b,c)/2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
	
}
int main(){
	float a,b,c;
	do{
		printf("input a= ");
		scanf("%f",&a);
		printf("input b= ");
		scanf("%f",&b);
		printf("input c= ");
		scanf("%f",&c);
	}while(a>=b+c ||b>=a+c ||c>=a+b);
	printf("perimeter of triangle: %f\n",Perimeter(a,b,c));
	printf("Acreage of triangle: %f\n",Acreage(a,b,c));
}
