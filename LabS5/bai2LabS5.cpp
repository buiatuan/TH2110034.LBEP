#include <stdio.h>
int main(){
	int a,b;
	
	do{
		printf("nhap a = ");
		scanf("%d",&a);
		printf("nhap b = ");
		scanf("%d",&b);
	}while(a<=0 || b<=0);
	
	int c=a,d=b;
	
	for(;a!=b;){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}	
	}
	printf("uoc chung lon nhat la: %d\n",a);
	
	int bcnn=c*d/a;
	printf("boi chung nho nhat cua 2 so la: %d\n",bcnn);
}
